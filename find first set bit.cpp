//find the first set bit

#include<bits/stdc++.h>
using namespace std;

unsigned int getFirstSetBit(int n){
    
    int k = 1;
    if(n == 0)
        return 0;
    while(1)
    {
        if((n & (1 << (k - 1))) == 0)
            k++;
        else
            return k;
    }
}

int main()
{
    int t;
    cin>>t; // testcases
    while(t--)
    {
        int n;
        cin>>n; //input n
        printf("%u\n", getFirstSetBit(n)); // function to get answer
    }
	return 0;
}
