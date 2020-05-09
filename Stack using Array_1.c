#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 50

int stack[MAXSIZE], tos = -1, size;

int isEmptyStack()  //is stack empty?
{
    if(tos == -1)
        return 1;
    else
        return 0;
}

int isFullStack()   //is stack full?
{
    if(tos >= (size - 1))
        return 1;
    else
        return 0;
}

//push operation
void push(int x)
{
    if(isFullStack())
        printf("\n Overflow.");
    else
        stack[++tos] = x;
}

//pop operation
int pop()
{
    if(isEmptyStack())
    {
        printf("\n Underflow.");
        return 0;
    }
    else
        return stack[tos--]; 
}

//shows the topmost element
int peek()
{
    return stack[tos];
}

void printStack()
{
    int i;
    printf("\n Stack is:");
    for(i = tos; i >= 0; i--)
        printf("\n%d",stack[i]);
}

int main() {
	int i;
	
	scanf("%d",&size); //input size of stack < 50

	for(i = 0; i < size; i++)
	    push(i + 1);
	printStack();
	printf("\n\n");
	
	for(i = 0; i <= size/3; i++)
	    printf("\nRemoved %d",pop());
	printf("\n");
	printStack();
	
	printf("\n Topmost element now: %d", peek());
	return 0;
}