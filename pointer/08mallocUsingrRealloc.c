#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    int n;
    printf("Enter size of array = ");
    scanf("%d",&n);

    int* A = (int *) calloc(n,sizeof(int)); // DYNAMICALLY ALLOCATED MEMORY
    // int* A = (int *) realloc(NULL, n*sizeof(int)); // this is equivalent to malloc(n*sizeof(int))

    for (int i = 0; i < n; i++)
    {
        A[i] = i + 1;
        /* code */
    }
    // A = (int *) realloc(A, 2*n*sizeof(int));
    // int *B = (int *) realloc(A, 0); // this is equivalent to free(A)
    // A = (int *) realloc(A, 0); // this is equivalent to free(A)
    int* B = (int *) realloc(NULL, n*sizeof(int)); // this is equivalent to malloc(n*sizeof(int))
    
    for (int i = 0; i < n; i++)
    {
        printf("%d ",A[i]);
        // printf("%d ",B[i]);
        /* code */
    }

    return 0;
}
