/*C program to implement stack with array*/
#include <stdio.h>
#define MAX 10

struct Stack{
    int stk[MAX];
    int top;
};
struct Stack s;

//check if stack is empty
int isEmptyStack()
{
    if(s.top == -1)
        return 1;
    else
        return 0;
}

//check if stack is full
int isFullStack()
{
    if(s.top == MAX - 1)
        return 1;
    else
        return 0;
}

//push operation
void push(int data)
{
    if(isFullStack())
        printf("\n Overflow.");
    else
        s.stk[++s.top] = data;
}

//pop operation
int pop()
{
    if(isEmptyStack())
        printf("\n Underflow - empty stack.");
    else
        return s.stk[s.top--];
}

//show the topmost element
int peep()
{
    if(isEmptyStack())
        printf("\n Empty stack.");
    else
        return s.stk[s.top];
}

//print stack
void printStk()
{
    int i;
    for(i = s.top; i >= 0; i--)
        printf("\n %d", s.stk[i]);
}

int main() {
	int i, num, size;
	s.top = -1;
	scanf("%d",&size);
//    size = 5;
    
	for(i = 0; i < size; i++)
	    push(i);
	printStk();
	
	printf("\n Removed %d", pop());
	printf("\n Removed %d", pop());
	printStk();
	
	printf("\n Topmost element %d", peep());
	return 0;
}
