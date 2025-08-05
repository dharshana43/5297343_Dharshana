#include<stdio.h>
int lonelyinteger(int a[], int n){
    int result=0;
    for(int i =0; i< n; i++){
        result ^= a[i];
    }
    return result;
}

int main() {
    int n;
    printf("Enter number of elements (must be odd): ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d integers:\n", n);
    for (int i = 0; i<n;i++){
        scanf("%d",&arr[i]);
    }
    int lonely = lonelyinteger(arr, n);
    printf("The lonely integer is: %d\n", lonely);
    return 0;
}