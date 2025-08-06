#include<stdio.h>
#include<stdlib.h> // for abs

int main(){
    int n;

    printf("Enter the size of the square matrix (n):");
    scanf("%d",&n);

    //check for a valid size
    if(n<=0){
        printf("Enter a valid size.should be a positive integer");
        return 1;
    }

    int matrix[n][n];

    int primary_diagnol_sum =0;
    int secondary_diagnol_sum =0;

    //getting matrix elements from the user
    printf("Enter the %d elements with spaces :\n ",n*n);

    for (int i=0; i<n; i++){
        for(int j=0; j<n; j++){

            //reads elements 
            scanf("%d",&matrix[i][j]);


        }

    }

    //calculate the sums of the diagnols
    for(int i=0;i<n;i++){

        //primary  diagnol elements are at matrix[i][i]
        primary_diagnol_sum +=  matrix[i][i];

        //secondary diagnol elements are at matrix[i][n-1-i];
        secondary_diagnol_sum += matrix[i][n-1-i];

    }
    //differnce between the diagnols
    int difference = abs( primary_diagnol_sum- secondary_diagnol_sum);

    printf("The sum of the primary diagnols sum:%d\n",primary_diagnol_sum);
    printf("The sum of the secondary diagnols sum:%d\n",secondary_diagnol_sum);
    printf("The difference diagnol:%d\n",difference);

    return 0;

}