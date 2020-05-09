#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int data;
    struct Node *next;
}Node;

Node *head = NULL;

//creates a circular linked list by adding the node at the end of the list
void createCLL(int x)
{
    Node *newNode = (Node*)malloc(sizeof(Node));
    Node *temp;
    newNode->data = x;
    newNode->next = newNode;
    
    if(!head)
        head = newNode;
    else
    {
        newNode->next = head;
        temp = head;
        while(temp->next != head)
            temp = temp->next;
        temp->next = newNode;
    }
}

void TraverseList()
{
    Node *temp = NULL;
    temp = head;
    do{
        printf("%d\n",temp->data);
        temp = temp->next;
    }while(temp != head);
}

void insertCLLbeg(int x)
{
    Node *newNode = (Node*)malloc(sizeof(Node));
    Node *temp;
    newNode->data = x;
    newNode->next = newNode;
    
    if(!head)
        head = newNode;
    else
    {
        temp = head;
        do{
            temp = temp->next;
        }while(temp->next != head);
        newNode->next = head;
        temp->next = newNode;
        head = newNode;
    }
}

/*
void insertListbeg(int x)
{
    Node *newNode = (Node*)malloc(sizeof(Node));
    newNode->data = x;
    newNode->next = head;
    head = newNode;
}

void insertListend(int x)
{
    Node *temp = NULL;
    temp = head;
    while(temp->next != NULL)
        temp = temp->next;
    
    Node *newNode = (Node*)malloc(sizeof(Node));
    newNode->data = x;
    newNode->next = NULL;
    temp->next = newNode;
    temp = newNode;
}

void insertListrandomPos(int x, int pos)
{
    int i;
    Node *newNode = (Node*)malloc(sizeof(Node));
    newNode->data = x;
    newNode->next = NULL;
    
    Node *temp = NULL;
    temp = head;
    for(i = 1; i < pos - 1; i++)
        temp = temp->next;
        
    newNode->next = temp->next;
    temp->next = newNode;
}

void createLL(int x)
{
    Node *newNode = (Node*)malloc(sizeof(Node));
    Node *temp = head;
    newNode->data = x;
    newNode->next = NULL;
    
    if(head == NULL)
        head = newNode;
    else{
        temp = head;
        while(temp->next != NULL)
            temp = temp->next;
        temp->next = newNode;
        temp = newNode;
    }
}
*/
int main(void) {
	// your code goes here
	int n, num, i;      //n = no. of elements, num = the element, i = iterator
	scanf("%d",&n);
	for(i = 0; i < n; i++)
	{
	     scanf("%d",&num);
	     createCLL(num);
	}
	TraverseList();
    
    insertCLLbeg(16);
    TraverseList();
	return 0;
}

