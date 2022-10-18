// Pointer and Arrays

#include<stdio.h>
int main(int argc, char const *argv[])
{
    /* code */
    int A[] = {2,4,5,8,1};
    printf("Address of first element : %d \n", A);
    printf("Address of first element(by & operator) : %d \n", &A[0]);
    printf("value of first element : %d \n", *A);
    printf("value of forth element (another way): %d \n", *(A+3));
    printf("value of forth element (regular way): %d", A[3]);
    return 0;
}
