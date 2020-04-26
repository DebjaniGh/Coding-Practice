//Gray to Binary

#include<bits/stdc++.h>
using namespace std;

// function to conver given N Gray to Binary
int grayToBinary(int n)
{
    int c = n;
    while(n >= 1)
    {
        n >>= 1;
        c ^= n;
    }
    return c;
}

int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
       cout<< grayToBinary(n)<<endl;
    }
}
