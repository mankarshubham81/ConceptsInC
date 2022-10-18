#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    int n;
    printf("Enter size of array = ");
    scanf("%d",&n);

    int* A = (int *) calloc(n,sizeof(int));

    for (int i = 0; i < n; i++)
    {
        A[i] = i + 1;
        /* code */
    }
    A = (int *) realloc(A, 2*n*sizeof(int));
    // int *B = (int *) realloc(A, 2*n*sizeof(int));
    for (int i = n/2; i < n*2; i++)
    {
        A[i] = i + 1;
        /* code */
    }
    
    for (int i = 0; i < n*2; i++)
    {
        printf("%d ",A[i]);
        // printf("%d ",B[i]);
        /* code */
    }

    return 0;
}
