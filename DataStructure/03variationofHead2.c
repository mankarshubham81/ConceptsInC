#include <stdio.h>
#include <stdlib.h>


// we can only access heap memory by pointer varible
struct Node
{
    int data;
    struct Node* link;
};

// inser
void insert(struct Node** head, int value){
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data = value;
    temp->link = NULL;
    // head = NULL;

    if (head != NULL)
    {
        temp->link = *head;
    }

    *head = temp;
}

void print(struct Node* head){
    while(head != NULL){
        printf("%d -> ", head->data);
        head = head->link; 
    }
    printf("END \n");
}

int main(int argc, char const *argv[])
{

    struct  Node* head = NULL;
    int i,x,n;

    printf("Enter how many number of linkedn list node you want : ");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        printf("Enter a number");
        scanf("%d",&x);
        insert(&head,x);
        print(head);
    }
        return 0;
}
