/* We are given an array and our task is to check if the elements of the array are present in Fibonacci series or not. 
Give the count of such numbers in the array.

Input:
The first line of input contains an integer T denoting the number of test cases. 
Each test case contains an integer n which denotes the number of elements in the array a[]. 
Next line contains space separated n elements in the array a[].

Output:
Print an integer which denotes the count of Fibonacci numbers in the array. */

#include <iostream>
#include <math.h>
using namespace std;

bool isPerfectSquare(long int x)
{
    long int s = sqrt(x); 
	return (s*s == x);
}

bool isFibonacci(int n)
{
    return isPerfectSquare(5*n*n - 4) || isPerfectSquare(5*n*n + 4);
}

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n, i, count = 0;
	    cin>>n;
	    int a[n];
	    
	    //scan in the array
	    for(i = 0; i < n; i++)
	        cin>>a[i];
	    
	    for(i = 0; i < n; i++)
	    {
	        if(isFibonacci(a[i]))
	            count++;
	    }
	    cout<<count<<endl;
	}
	return 0;
}
