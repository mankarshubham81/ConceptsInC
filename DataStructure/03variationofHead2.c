#include <stdio.h>
#include <stdlib.h>


// we can only access heap memory by pointer varible
struct Node
{
    int data;
    struct Node* link;
};

struct  Node* head;
// inser
void insert(int value, int position){
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    // struct Node* newNode = new Node();
        newNode->data = value ;
        newNode->link = NULL;
    
    // if (position == 0)
    // {
    //     return;
    // }
    

    if(position == 1){
        newNode->link = head;
        head = newNode;
        return;
    }

    struct Node* temp = head;
    for (int i = 0; i < position-2; i++){
        temp = temp->link;
    }
    newNode->link = temp->link;
    temp->link = newNode;
}

// reverse LInked List Using Recursion
void reverseUsingRecursion(struct Node* pointerToHead){
    if (pointerToHead->link == NULL)
    {
        head = pointerToHead;
        return;
    }

    reverseUsingRecursion(pointerToHead->link);
    struct Node* q = pointerToHead->link;
    q->link = pointerToHead;
    pointerToHead->link = NULL;
    
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

     head = NULL;
    // int i,x,n;

    // printf("Enter how many number of linkedn list node you want : ");
    // scanf("%d",&n);
    // for ( i = 0; i < n; i++)
    // {
    //     printf("Enter a number");
    //     scanf("%d",&x);
    //     insert(&head,x);
    //     print(head);

    // }
           insert(30, 1);
        insert(40, 2);
        insert(60, 3);
        printf("LL");
        print(head);

    reverseUsingRecursion(head);
    printf("reverse LL Using Recursion is: ");
    print(head);

        return 0;
}
