// Arrays As Function Arguments

// Pointer and Arrays

// Arrays are always pass as a reference to a function

#include<stdio.h>

int sumOfElements(int a[], int s){ // "int a[]"" and "int* a" , are same
    int i, sum = 0;
    for (int i = 0; i < s; i++)
    {
        sum = sum + a[i];
    }
    return sum;
}

void Double(int *a, int siz){
    int i =0;

    // String names = 'raj';
    // printf("name is => %s", names);

    for (int i = 0; i < siz; i++)
    {
        a[i] = 2* a[i];
    }

    printf(" === Result of Double each element in an Array === \n");

        printf("[ ");
    for (i = 0; i < siz; i++)
    {
        printf("%d, ",a[i]);
    }
        printf("] \n");
    
    
}

int main(int argc, char const *argv[])
{
    /* code */
    int A[] = {1,2,3,4,5};
    int size = sizeof(A)/sizeof(A[0]);
    int result = sumOfElements(A,size); // "A" OR "&A[0]" , are same
    Double(&A[0], size);
    printf("result is: %d", result);
    return 0;
}
