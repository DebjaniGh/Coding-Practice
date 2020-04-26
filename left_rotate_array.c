//another program to left rotate an array
#include <iostream>
using namespace std;

//A = array, n = size of array, d = rotate array by 'd' elements

int main()
{

	int t;
	cin>>t;
	while(t--)
	{
		unsigned int n, i, d;
		cin>>n>>d;
		int a[n];

        //take in the array elements
        for(i = 0; i < n ; i++)
	        cin>>a[(i + n - d) % n];

       //print the final output
        for(i = 0; i < n ; i++)
            cout<<a[i]<<" ";
        cout<<endl;
	}
	return 0;
}
