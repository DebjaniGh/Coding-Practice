//longest consecutive 1s in binary representation of a no
//Initial Template for C++

#include <iostream>
using namespace std;

int maxConsecutiveOnes(int x)
{
 
    int count = 0;
    while(x != 0)
    {
        x = (x & (x<<1));
        count++;
    }
    return count;
}

int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		cout<<maxConsecutiveOnes(n)<<endl;
	}
	return 0;
}
