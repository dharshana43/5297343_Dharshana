#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char* balancedSums(int arr_count, int* arr){
    long long total =0;
    for(int i =0; i< arr_count;i++){
        total += arr[i];
    }
    long long left_sum =0;
    for(int i =0; i<arr_count;i++){
        if(left_sum == total-left_sum - arr[i]){
            return "YES";
        }
        left_sum += arr[i];
    }
    return "NO";
}
int main(){
    int T;
    printf("Enter number of test cases: ");
    scanf("%d", &T);
    

    while(T--){
        int n;
        printf("Enter number of elements: ");
        scanf("%d", &n);

        int* arr = malloc(n * sizeof(int));
        printf("Enter %d elements: ", n);
        for(int i =0; i<n; i++){
            scanf("%d", &arr[i]);
        }
        char* result = balancedSums(n, arr);
        printf("%s\n", result);

        free(arr);
    }
    return 0;
}
