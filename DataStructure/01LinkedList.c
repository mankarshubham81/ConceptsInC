#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node* link;
    
    /* data */
};

struct Node *head = NULL;
struct Node *tail = NULL;
int listLength = 0;

void insert(int value){
    // if (head == NULL)
    // {
    struct  Node* temp = (struct Node*)malloc(sizeof(struct Node));
    (*temp).data = value;
    // temp->data = value ;
    (*temp).link = head;
    head = temp; 
    
    // }
}

void insertWithPosition(int value, int position){
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
    listLength++;
}

void deleteNodeAtPosition(int position){
    struct Node* temp = head;

    if(position == 1){
        head = temp->link;
        free(temp);
        return;
    }

    for (int i = 0; i < position-2; i++){
        temp = temp->link;
    }
    temp->link = temp->link->link;
    free(temp->link);
}

void print(){
    struct Node* temp = head;
    while (temp != NULL)
    {
        printf("%d -> ",temp->data);
        temp = temp->link;
        /* code */
    }
    printf("NULL");
    
    
}

// reverse a linked list
void reverse(){
    struct Node *prev, *current, *next;
    prev = NULL;
    current = head;
    while (current != NULL)
    {
        next = current->link;
        current->link = prev;
        prev = current;
        current = next;
    }

    head=prev;
     
}

int main(int argc, char const *argv[])
{
    head = NULL;
    int i,n, x;

    // printf("how many number");
    // scanf("%d",&n);
    // for ( i = 0; i < n; i++)
    // {
    //     printf("Enter a number");
    //     scanf("%d",&x);
    //     insertWithPosition(x, i);
    // }
    
    printf("listLength : %d \n", listLength);
        // insertWithPosition(90, 0);
        insertWithPosition(30, 1);
        insertWithPosition(40, 2);
        insertWithPosition(60, 3);
    printf("listLength : %d \n", listLength);
        print();

    printf("\n");

    // deleteNodeAtPosition(3);
//     deleteNodeAtPosition(1);

        // print();
    reverse();
    printf("\n Reversed Linked list \n");

    print();

    /* code */
    return 0;
}
