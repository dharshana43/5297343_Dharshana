#include <stdio.h>

long sumXor(long n) {
    if (n == 0) return 1;  // Special case

    int zeroBits = 0;
    while (n > 0) {
        if ((n & 1) == 0) zeroBits++;
        n >>= 1;
    }
    return 1L << zeroBits;
}

int main() {
    long n;
    printf("Enter a number: ");
    scanf("%ld", &n);

    long result = sumXor(n);
    printf("Result: %ld\n", result);

    return 0;
}
