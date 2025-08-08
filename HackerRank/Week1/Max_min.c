#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

int compare(const void *a,const void*b){
    int x =*(int*)a ,y = *(int*)b;
    return (x>y)-(x<y);
}
int maxMin(int k,int n,int* arr){
    qsort(arr,n,sizeof(int),compare);

    int min_unfairness = INT_MAX;
    for(int i=0;i<=n-k;i++){
        int diff = arr[i+k-1]-arr[i];
        if(diff<min_unfairness) min_unfairness=diff;
        
    }
    return min_unfairness;
}
int main(){
    int n,k;
    scanf("%d %d",&n,&k);
    int arr[n];
    for(int i =0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("%d\n",maxMin(k,n,arr));
    return 0;
}
