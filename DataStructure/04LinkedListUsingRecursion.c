#include<stdio.h>
#include<stdlib.h>

struct  Node
{
    int data;
    struct Node* link;
};

struct Node* insert(struct Node* head, int value){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->link = NULL;
    if (head == NULL)
    {
        head = newNode;
    }else {
        struct Node* temp = head;
        while (temp->link != NULL)
        {
            temp = temp->link;
        }
        temp->link = newNode;
    }

    return head;
}

void print(struct Node* p){
    if(p == NULL ) {
        printf("END\n"); 
        return;
    }
    printf("%d ->",p->data); 
    print(p->link);
}

void printReverse(struct Node* p){
    if(p == NULL ) {
        return;
    }  
    printReverse(p->link);
    printf("%d ->",p->data); 
}

int main(int argc, char const *argv[])
{
    struct Node* head = NULL;
    head = insert(head, 62);
    head = insert(head, 28);
    head = insert(head, 23);
    head = insert(head, 42);
    print(head);
    printf("Elements in reverse Order : ");
    printReverse(head);
    printf("END\n"); 

    return 0;
}
