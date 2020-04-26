#include <bits/stdc++.h>
using namespace std;

// Function to check if Kth bit is set or not
bool checkKthBit(int n, int k){
    
    //using left shift: take binary of 1 and left shift it by k bits
    //so that we get a no (x) whose kth bit is set. Now do bitwise AND between 
    //n and x to see if kth bit of n is set.
    
    /*if(n & (1 << k))
        return true;
    else
        return false;*/
    
    //using right shift: bring the kth bit of n to LSB and 
    //then perform bitwise AND between n and 1. if you get 1,
    //then kth bit of n is set.
    if(((n >> k) & 1) == 1)
        return true;
    else
        return false;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    long long n;
	    cin>>n;
	    int k;
	    cin>>k;
	    
	    if(checkKthBit(n, k))
	        cout << "Yes" << endl;
	    else
	        cout << "No" << endl;
	}
	return 0;
}
