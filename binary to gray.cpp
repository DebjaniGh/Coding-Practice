//binary to gray

#include<bits/stdc++.h>
using namespace std;


//  Function to find the gray code of given number N
int greyConverter(int n)
{
    return (n ^ (n>>1));
}

int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin >> n;
        cout << greyConverter(n) << endl;
    }
}
