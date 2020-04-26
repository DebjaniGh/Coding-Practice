//check if the given no is a power of 2

#include<bits/stdc++.h>
using namespace std;

// Function to check power of two
bool isPowerofTwo(long long n){
    
    // Naive method: Keep dividing n by 2 and
    // check if it becomes an odd no other than 1. 
    // If this happens, then n is NOT a power of 2.
    
    /* if(n == 0)
        return false;
    while(n != 1)
    {
        if((n % 2) != 0)
            return false;
        n /= 2;
    }
    return true; */
    
    //Brian Kernigham Solution: any power of 2 has only 1 bit set.
    //so find the no of bits set in the given no. If it's 1, it's a
    // power of 2. 
    
  /*  int count = 0;
    while(n > 0)
    {
        n = n & (n - 1);
        count++;
    }
    if(count == 1)  return true;
    else return false; */
    
    //Also, when we do bitwise AND between n & (n-1),
    //it turns off the leftmost set bit. Since a power of 2 has only 1 bit set, 
    //this operation will make it 0.
    
    if(n == 0)
        return false;
    
    return ((n & (n-1)) == 0);
    
}

int main()
{

    int t;
    cin>>t;//testcases

    for(int i=0;i<t;i++)
    {
        long long n; //input a number n
        cin>>n;
        if(n<=0) // if n is less than equal to zero then it can't be a power of 2
        {
            cout<<"NO"<<endl; //so we print No
            continue; //continue and check for other values
        }

         if(isPowerofTwo(n))
             cout<<"YES"<<endl;
         else
            cout<<"NO"<<endl;
    }

    return 0;
}
