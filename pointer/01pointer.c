// Basics of C
// De-referencing in C 
#include<stdio.h>

int square(int* num){

    return *num * *num;
}

int main(int argc, char const *argv[])
{
    int a = 9;
    int result = square(&a);
    printf("Square of %d is %d", a, result);
    return 0;
}
