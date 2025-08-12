#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isPowerOfTwo(unsigned long n) {
    return (n && !(n & (n - 1)));
}

unsigned long largestPowerOfTwoLessThan(unsigned long n) {
    unsigned long p = 1;
    while (p << 1 <= n) {
        p <<= 1;
    }
    return p;
}

char* counterGame(unsigned long n) {
    static char winner[10]; // persistent storage for return
    int turn = 0; // 0 = Louise, 1 = Richard

    while (n != 1) {
        if (isPowerOfTwo(n)) {
            n >>= 1;
        } else {
            n -= largestPowerOfTwoLessThan(n);
        }
        turn = !turn; // switch turn
    }

    if (turn == 1)
        strcpy(winner, "Louise");
    else
        strcpy(winner, "Richard");

    return winner;
}

int main() {
    int t;
    unsigned long n;

    printf("Enter number of test cases: ");
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        printf("Enter n: ");
        scanf("%lu", &n);
        printf("%s\n", counterGame(n));
    }

    return 0;
}
