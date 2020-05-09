/* C program to implement queue using array */
#include <stdio.h>
#define MAX 5

struct queue{
    int front;
    int rear;
    int q_arr[MAX];
};

struct queue q;

//is queue empty?
int isQEmpty()
{
    if(q.front == q.rear == -1)
        return 1;
    else
        return 0;
}

//is queue full?
int isQFull()
{
    if((q.rear == MAX - 1 && q.front  == 0) || (q.rear == (q.front - 1)%(MAX - 1)))
        return 1;
    else
        return 0;
}

//insert element into queue
void enqueue(int data)
{
    if(isQFull())
        printf("\n Overflow.");
    else
    {
        if(q.front == -1) // if queue is initially Empty
            q.front = 0;
        
        q.rear = (q.rear + 1) % MAX;
        q.q_arr[q.rear] = data;
    }
}

//delete element from queue; replaces the element by -1
int dq()
{
    int num;
    if(isQEmpty())
    {
        printf("\n queue Empty");
        return 0;
    }
    else
    {
        num = q.q_arr[q.front];
        q.q_arr[q.front] = -1;   
        
        if(q.front == q.rear)   //all elements deleted
            q.front = q.rear = -1;  //empty queue
        else if(q.front == MAX - 1) //
            q.front = 0;  //since the next position for front is index 0 
        else
            q.front++;
    }
    return num;
}

//print queue
void printQ()
{
    int i;
    printf("\n");
    if(q.front == -1)
        printf("\n Queue empty.\n");
    else if(q.rear >= q.front)
    {
        for(i = q.front; i <= q.rear; i++)
            printf("\t %d",q.q_arr[i]);
    }
    else
    {
        for(i = q.front; i < MAX; i++)
            printf("\t %d",q.q_arr[i]);
            
        for(i = 0; i <= q.rear; i++)
            printf("\t %d",q.q_arr[i]);
    }
}
int main()
{
    int i, num;
    
    q.front = -1;
    q.rear = -1;
    
    for(i = 0; i < MAX; i++)
        enqueue(i+1);
    printQ();
    
    //enqueue(11);  //will cause overflow.
    
    for(i = 0; i < MAX; i++)
    {
        num = dq();
        if(num)
            printf("\n Removed %d",num);
        else
            printf("\n Queue empty.");
    }
        
    printQ();
    
    enqueue(114); 
    enqueue(29); 
    enqueue(12); 
    enqueue(-6); 
  
    printQ(); 
  
    
    printf("\nRemoved %d", dq()); 
    printf("\nRemoved %d", dq()); 
  
    printQ(); 
  
    enqueue(9); 
    enqueue(20); 
    enqueue(5); 
  
    printQ(); 
  
    enqueue(20); 
return 0;
}
