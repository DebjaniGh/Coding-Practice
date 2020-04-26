//Given a number N, the task is to find the XOR of all numbers from 1 to N.

#include<bits/stdc++.h>
using namespace std;
int xor_from_1_to_n(int n)
{
   /* int i, xr = 0;
    for(i = 1; i <= n; i++)
        xr ^= i;
    return xr;*/
    
    int rem = n%4;
    int xr;
    switch(rem)
    {
        case 0: xr = n;
                break;
                
        case 1: xr = 1;
                break;
                
        case 2: xr = (n+1);
                break;
                    
        case 3: xr = 0;
                break;
    }
    return xr;
}

int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin >> n;
        cout << xor_from_1_to_n(n) << endl;
    }
}
