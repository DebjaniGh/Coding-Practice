//Find all elements in array which have at-least two greater elements

#include <bits/stdc++.h>
using namespace std;

void largest_2(int a[], int n)
{
    int i, first, second;
    first = second = INT_MIN;
    
    for(i = 0; i < n; i++)
    {
        if(a[i] > first)
        {
            second = first;
            first = a[i];
        }
        else if(a[i] > second)
            second = a[i];
    }

    for(i = 0; i < n; i++)
        if(a[i] < second)
            cout<<a[i]<<" ";
    cout<<endl;
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
        largest_2(a, n);
    }
    return 0;
}

