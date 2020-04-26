#include <bits/stdc++.h>
using namespace std;

void swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

void reverse_array(int a[], int low, int high)
{
	int h = high-1;
	while(low < h)
	{
		swap(&a[low], &a[h]);
		low++;
		h--;
	}
}

void reverse(int a[], int n, int k)
{
	int count = 0, i = 0;
	while((count + k) <= n)
	{
		reverse_array(a, i+count, i+count+k);
		count += k;
	}
	reverse_array(a, i+count, n);
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n, k;	//n = size of array, k = size of sub array
		cin>>n>>k;
		int a[n];
		for(int i = 0; i < n; i++)
			cin>>a[i];
			
		reverse(a, n, k);
		for(int i = 0; i < n; i++)
			cout<<a[i];
	}
	return 0;
}
