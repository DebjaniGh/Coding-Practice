//insert and delete in array

#include <iostream>
using namespace std;

int delete_op(int a[], int pos, int size, int cap)
{
        //size = no. of elements in the array
        //cap = max no of elements array can hold
        int index = pos-1;
        for(int i = index; i < size; i++)
            a[i] = a[i+1];
        
        return (size - 1);
}

int insert_op(int a[], int pos, int size, int cap, int x)
{
    int new_size;
    if(size == cap)
        cout<<"Cannot insert. Array full."<<endl;
    else
    {
        for(int i = size; i > (pos - 1); i--)
            a[i] = a[i-1];
        a[pos-1] = x;
    }
    return (size + 1);
}

int main() 
{
    int size, capacity;
    cin>>size>>capacity;
    
    int arr[capacity];
    for(int i = 0; i < size; i++)
        cin>>arr[i];
    
   /* int arr[] = {10, 20, 15, 16, 17, 45};
    int size = sizeof(arr)/sizeof(arr[0]); 
    */
    int new_size;
  /*  new_size = delete_op(arr, 2, size, capacity); 
    for(int i = 0; i < new_size; i++)
        cout<<arr[i]<<" "; */
  
    new_size = insert_op(arr, 3, size, capacity, 100);
    for(int i = 0; i < new_size; i++)
        cout<<arr[i]<<" "; 
    
	return 0;
}
