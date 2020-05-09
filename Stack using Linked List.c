/*C program to implement stack with Linked List*/
#include <stdio.h>
#include <stdlib.h>

struct StackNode{
    int data;
    struct StackNode *next;
};
struct StackNode *top = NULL;  //here top is the head of the Linked List

//push elements into stack - data inserted at the beginning of the list
void push(int num)
{
    struct StackNode *newNode = NULL;
    newNode = (struct StackNode*)malloc(sizeof(struct StackNode));
    if(!newNode)
        printf("\n Error - not enough memory.");
        
    newNode->data = num;
    newNode->next = NULL;
    
    if(!top)
        top = newNode;
    else
    {
        newNode->next = top;
        top = newNode;
    }
}

//remove elements from stack from the beginning of the Linked List
int pop()
{
    int x;
    struct StackNode *temp = NULL;
    x = top->data;
    temp = top;
    top = temp->next;
    temp->next = NULL;
    free(temp);
    return x;
}

//print Stack
void printStack()
{
    struct StackNode *temp = NULL;
    temp = top;
    while(temp != NULL)
    {
        printf("\n %d",temp->data);
        temp = temp->next;
    }
}

int main() {
	int i, n;
	scanf("%d",&n);
	
	for(i = 0; i < n ; i++)
	    push(i+1);
	printStack();
	
	printf("\nRemoved %d", pop());
	printf("\nRemoved %d", pop());
	printStack();
	
	
	return 0;
}
