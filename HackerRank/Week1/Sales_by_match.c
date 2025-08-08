#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int colors[101] = {0};
    for(int i =0;i<n;i++){
        int c;
        scanf("%d", &c);
        colors[c]++;
    }
    int pairs = 0;
    for(int i =1; i <= 100;i++){
        pairs += colors[i] / 2;
    }
    printf("%d\n", pairs);
    return 0;
}