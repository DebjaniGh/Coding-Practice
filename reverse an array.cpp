//reverse an array 
//This solution takes O(n) time and O(1) auxiliary space

#include<bits/stdc++.h>
using namespace std;

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void reverse(int a[], int low, int high)
{
    while(low<high)
    {
        swap(&a[low], &a[high]);
        low++;
        high--;
    }
}
// This function rotate array by D elements
// arr: input elements
// n: size of the array
void rotateArr(int arr[], int d, int n)
{
   reverse(arr, 0, d-1);    //reverse the first d elements
   reverse(arr, d, n-1);    //reverse the last n-d elements
   reverse(arr, 0, n-1);    //reverse the entire array
}

int main() {

	int t;
	cin >> t;
	
	while(t--){
	    int n, d;
	    cin >> n >> d;
	    
	    int arr[n];
	    
	    for(int i = 0; i < n; i++){
	        cin >> arr[i];
	    }
	    
	    rotateArr(arr, d,n);
	    
	    for(int i =0;i<n;i++){
	        cout << arr[i] << " ";
	    }
	    cout << endl;
	    
	}
	
	return 0;
}
