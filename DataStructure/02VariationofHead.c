#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *link;
};

struct Node* insert(struct Node* head,int value)
{
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data = value;
    temp->link = NULL;
    // head = NULL;

    if (head != NULL)
    {
        temp->link = head;
    }

    head = temp;
    

    return head; 
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
    struct Node *head = NULL;
    int i, x, n;
    printf("Enter How many Number you want to add in Linked List : ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter a number : ");
        scanf("%d", &x);
        head = insert(head, x);
        print(head);
    }
        return 0;
}
