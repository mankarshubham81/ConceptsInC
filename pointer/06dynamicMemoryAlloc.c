#include<stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int n;
    printf("Enter a Number for size of array : ");
    scanf("%d",&n);
    // int *A = (int *)malloc(n*sizeof(int)); // dynamically allocated array
    int *A = (int *)calloc(n,sizeof(int));// dynamically allocated array

    for(int i =0 ;i < n;i++ ){
        A[i] = i+1;
    }
    free(A);
    for(int i =0 ;i < n;i++ ){
        printf("%p ",A[i]);
    }
    return 0;
}