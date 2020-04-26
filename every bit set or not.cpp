//Given a number N. Write a program to check whether every bit in the binary representation of the given number is set or not.
//a no whose all bits are set has a unique property. The no succeeding it will have that many 0s. 
//for eg: 7 & 8, 15 & 16. So if do bitwise & between n and (n+1), we will get output as 0 if n has every bit set.
#include <iostream>
using namespace std;

bool isEveryBitSet(int n)
{
    if((n & (n+1)) == 0)
        return 1;
    else
        return 0;
}

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    if(isEveryBitSet(n))
	        cout<<"YES"<<endl;
	    else
	        cout<<"NO"<<endl;
	}
	return 0;
}
