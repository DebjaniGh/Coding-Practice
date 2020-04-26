//remove duplicates from sorted array

#include <iostream>
using namespace std;

int removeDupli(int a[], int n)
{
    int res = 1;
    for(int i = 1; i < n; i++)
    {
        if(a[i] != a[res-1])
        {
            a[res] = a[i];
            res++;
        }
    }
    return res;
}

int main() {
	int arr[] = {10, 10, 20, 30, 30, 70,100, 100, 100};
	int size = sizeof(arr)/sizeof(arr[0]);
	int index = removeDupli(arr, size);
	
	for(int i = 0; i < index; i++)
	    cout<<arr[i]<<" ";
	return 0;
}
