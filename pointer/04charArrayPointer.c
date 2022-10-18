#include<stdio.h>

// int A[5];
// *(A+i) is same as A[i]
// (A+i) is same as &A[i]

void print(char *cm){

    // cm[1] = 'w';
    while (*cm != '\0')
    {
        printf("%c",cm[0]);
        cm++;
    }
    printf("\n");
    
}

int main(int argc, char const *argv[])
{
    char cm[20] = "hello";
    printf(cm);
    /* code */
    return 0;
}
