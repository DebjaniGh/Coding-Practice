/* Given an array of positive integers.
Your task is to find the leaders in the array.
Note: An element of array is leader if it is >= to all the elements to its right
side. Also, the rightmost element is always a leader. */

#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    long int n, i, j, max, k;
	    cin>>n;
	    long int a[n], b[n];

	    //read in the array elements
	    for(i = 0; i < n; i++)
	        cin>>a[i];

        /* set max = rightmost element
           traverse the array from right to left
           i = n - 2 to 0
           check if max < a[i] then max = a[i]
           print max*/
        max = a[n - 1];
        b[0] = max;
        for(i = n - 2, j = 1; i >= 0; i--)
        {
            if(max <= a[i])
            {
                max = a[i];
                b[j++] = max;
            }
        }
        for(k = j - 1; k >= 0; k--)
            cout<<b[k]<<" ";
        cout<<endl;
	}
	return 0;
}
