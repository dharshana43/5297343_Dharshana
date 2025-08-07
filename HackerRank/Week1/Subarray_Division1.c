#include<stdio.h>

int main(){
    int arr[100], n;
    printf("Enter size of the array: ");
    scanf("%d", &n);

    printf("Enter %d elements of the array:\n", n);
    for(int i = 0; i<n;i++){
        scanf("%d", &arr[i]);
    }
    printf("All possiblle Subarrays  are:\n");
    for(int start = 0; start < n; start++){
        for(int end = start;end< n; end++){
            for(int k = start; k<= end; k++){
                printf("%d ", arr[k]);
            }
            printf("\n");
        }
    }
    return 0;

}