// Function Pointer

#include<stdio.h>

void bubbleSort(int* A, int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-1; j++)
        {
            if(A[j] < A[j+1]){
                int temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
            /* code */
        }
        
    }
    
}

int main(int argc, char const *argv[])
{
    // Pointers ===> can point to data and can point to functions
    int i,A[] = {3,1,4,2,6,5};
    bubbleSort(A,6);
    for(i -0; i<6; i++) printf("%d ", A[i]);
    /* code */
    return 0;
}
