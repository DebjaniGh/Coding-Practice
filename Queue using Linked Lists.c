/* C program to implement queue using linked list */
#include <stdio.h>
#include <stdlib.h>

struct QueueNode{
    int data;
    struct QueueNode *next;
};
struct QueueNode *front = NULL, *rear = NULL;

//enqueue operation - insertion at end
void enqueue(int num)
{
    struct QueueNode *newNode = NULL;
    newNode = (struct QueueNode*)malloc(sizeof(struct QueueNode));
    if(!newNode)
        printf("\n error - not enough memory.");
    
    newNode->data = num;
    newNode->next = NULL;
    
    if(!front)  //if List is empty
        front = newNode;
    else
    {
        rear = front;
        while(rear->next != NULL)
            rear = rear->next;
        rear->next = newNode;
        rear = newNode;
    }
}

//dequeue operation - deletion from beginning
int dq()
{
    struct QueueNode *temp = NULL;
    int n;
    temp = front;
    front = temp->next;
    temp->next = NULL;
    n = temp->data;
    free(temp);
    return n;
}

//print Queue
void printQ()
{
    struct QueueNode *temp = NULL;
    temp =  front;
    printf("\n");
    while(temp != NULL)
    {
        printf("\t %d", temp->data);
        temp = temp->next;
    }
}

int main() {
	int i; 
	for(i = 1; i < 10; i++)
	    enqueue(i*i);
	printQ();
	
	for(i = 1; i < 4; i++)
	    printf("\n Removed %d", dq());
	printQ();
	
	return 0;
}
