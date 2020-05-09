#include <stdio.h>
#include <stdlib.h>

//List structure
struct ListNode{
    int data;
    struct ListNode *next;
};
struct ListNode *head = NULL;

//function to create Linked List
void createLL(int x)
{
    struct ListNode *temp = NULL, *newNode = NULL;
    newNode = (struct ListNode *)malloc(sizeof(struct ListNode));
    if(!newNode)
        printf("\n Error - not enough memory.");
    
    newNode->data = x;
    newNode->next = NULL;
    
    if(!head)
        head = newNode;
    else
    {
        temp = head;
        while(temp->next != NULL)
            temp = temp->next;
        temp->next = newNode;
        temp = newNode; 
    }
}

//function to print the Linked List
void printLL()
{
    struct ListNode *temp = NULL;
    temp = head;
    while(temp != NULL)
    {
        printf("%d\n",temp->data);
        temp = temp->next;
    }
}

//count no. of nodes in the Linked List
int noOfNodes()
{
    struct ListNode *temp = NULL;
    int count = 0;
    temp = head;
    while(temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

//function to insert a node in the Linked List
void insertLL(int x, int pos)
{
    struct ListNode *temp = NULL, *newNode = NULL;
    int num, i, k = 1;
    newNode = (struct ListNode *)malloc(sizeof(struct ListNode));
    if(!newNode)
        printf("\n Error - not enough memory.");
    
    newNode->data = x;
    newNode->next = NULL;
    
    num = noOfNodes();
    printf("\nNo. of nodes present: %d\n", num);

    //insertion at the beginning of the List
    if(pos == 1)
    {
        newNode->next = head;
        head = newNode;
    }
    //insertion at the end of the List
    else if(pos == num)
    {
        temp = head;
        while(temp->next != NULL)
            temp = temp->next;
        temp->next = newNode;
        temp = newNode; 
    }
    //insertion at any other position
    else
    {
        temp = head;
        for(i = 1; i < pos - 1; i++)
            temp = temp->next;
        newNode->next = temp->next;
        temp->next = newNode;
    }
}

//function to delete a node in the Linked List
void delLL(int pos)
{
    int num, i;
    struct ListNode *temp = NULL, *ptr = NULL;
    
    num = noOfNodes();
    
    //deletion at the beginning of the list
    if(pos == 1)
    {
        temp = head;
        head = head->next;
        temp->next = NULL;
        free(temp);
    }
    //deletion at the end of the list
    else if(pos == num)
    {
        temp = head;
        while(temp->next != NULL)
        {
            ptr = temp;
            temp = temp->next;
        }
        ptr->next = NULL;
        free(temp);
    }
    //deletion at any other position
    else
    {
        temp = head;
        for(i = 1; i < pos; i++)
        {
            ptr = temp;
            temp = temp->next;
        }
        ptr->next = temp->next;
        temp->next = NULL;
        free(temp);
    }
}

int main() {
	//code
	int i, num;
	for(i = 1; i < 5; i++)
	    createLL(i);
	printLL();
	
	insertLL(0,1);
	printLL();
	
	num = noOfNodes();
	insertLL(7,num);
	printLL();
	
	num = noOfNodes();
	insertLL(14,num/2);
	printLL();
	
	insertLL(9,3);
	printLL();
	
	printf("\n");
	delLL(1);
	printLL();
	
	printf("\n");
	num = noOfNodes();
	delLL(num);
	printLL();
	
	printf("\n");
	delLL(4);
	printLL();
	
	return 0;
}
