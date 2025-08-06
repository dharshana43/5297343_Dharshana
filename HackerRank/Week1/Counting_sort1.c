#include<stdio.h>
int main(){
    int n,arr[100000],freq[100]={0};

    printf("Enter the number of elements: ");
    scanf("%d",&n);

    printf("Enter %d elements of the array: \n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        freq[arr[i]]++;
    }
    printf("\nFrequency Array:\n");
    for (int i=0;i<n;i++){
        printf("%d ",freq[i]);
    }
    return 0;

}