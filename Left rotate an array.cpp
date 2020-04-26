#include <iostream>
using namespace std;

//A = array, n = size of array, d = rotate array by 'd' elements

void leftRotate(int A[], int n, int d)
{

    int temp, i;
    temp = A[0];
    for(i = 0; i < n - 1; i++)
            A[i] = A[i + 1];
    A[n - 1] = temp;
}

int main()
{

	int t;
	cin>>t;
	while(t--)
	{
		int n, i, d;
		cin>>n;
		int a[n];

        //take in the array elements
        for(i = 0; i < n ; i++)
	        cin>>a[i];

		cin>>d;
		for(i = 0; i < d; i++)
	        leftRotate(a,n,d);

       //print the final output
        for(i = 0; i < n ; i++)
            cout<<a[i]<<" ";
        cout<<endl;
	}
	return 0;
}
