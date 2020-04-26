/* Given an array of size N with all initial values as 0, write a program to perform following M range increment operations as shown below:
 
increment(a, b, k) : Increment values from 'a' to 'b' by 'k'.  

After M operations, calculate the maximum value in the array.
Input:
First line of input contains a single integer T which denotes the number of test cases. 
T test cases follows. First line of each test case contains two space separated integers N and M. 
Next M lines of each test case contains three space separated integers a , b and k.

Output:
For each test case print the maximum element in the array after M increment operations. */

#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n, i, m, max = -9999;
	    cin>>n>>m;
	    int arr[n];
	    
	    //initialize array of size n with 0
	    for(i = 0; i < n; i++)
	        arr[i] = 0;
	    
	    //perform range operation 'm' times
	    while(m--)
	    {
	        int a, b, k;
	        cin>>a>>b>>k;
	        for(i = a; i <= b; i++)
	            arr[i] += k;
	    }
	    
	    for(i = 0; i < n; i++)
	    {
	        if(max < arr[i])
	            max = arr[i];
	    }
	    cout<<max<<endl;
	}
	return 0;
}
