//second smallest element in an array 

#include <bits/stdc++.h>
using namespace std;

void largest_3(int a[], int n)
{
    int i, first, second, third;
    first = second = third = INT_MAX;
    
    for(i = 0; i < n; i++)
    {
        if(a[i] < first)
        {
            second = first;
            first = a[i];
        }
        else if(a[i] < second)
            second = a[i];
    }

    cout<<second<<endl;
}

int main()
{
    
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i = 0; i < n; i++)
            cin>>a[i];
        largest_3(a, n);
    }
    return 0;
}

