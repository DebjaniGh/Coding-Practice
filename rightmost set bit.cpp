//find the rightmost set bit

#include <bits/stdc++.h>
using namespace std;


/*  Function to find the first position with different bits
*   This function returns the position with different bit
*/
int posOfRightMostDiffBit(int m, int n)
{
    int xr = m^n;
   // cout<<"xr = "<<xr<<endl;
    
    int rightmost_set_bit = xr & ~(xr - 1);
  //  cout<<"rightmost_set_bit = "<<rightmost_set_bit<<endl;
    
    int k = 1;
    while(1)
    {
        if((rightmost_set_bit & (1 << (k - 1))) == 0)
        {
            k++;
          //  cout<<k<<endl;
        } 
        else return k;
    }
}

int main()
{   
    int t;
    cin>>t; //input number of testcases
    while(t--)
    {
         int m,n;
         cin>>m>>n; //input m and n
         cout << posOfRightMostDiffBit(m, n)<<endl;
    }
    return 0;     
}
