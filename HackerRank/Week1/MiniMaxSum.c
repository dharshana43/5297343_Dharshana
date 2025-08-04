#include<stdio.h>
void miniMaxSum(int arr_count, int*arr){
    long min=arr[0], max =arr[0],total=0;
    for (int i = 0; i < arr_count; i++){
        if(arr[i] < min) min = arr[i];
        if(arr[i] > max) max = arr[i];
        total +=arr[i];
    }
    printf("%ld %ld\n", total - max, total-min);
}
int main() {
    int arr[5];
    for (int i=0;i<5;i++) {
        scanf("%d", &arr[i]);
    }
    miniMaxSum(5, arr);
    return 0;
}