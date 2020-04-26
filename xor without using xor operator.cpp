//find xor of 2 numbers without using xor operator
#include<bits/stdc++.h>
using namespace std;

int xor_of_two_no(int a, int b)
{
/*	int i, res = 0;
	for(i = 31; i >= 0; i--)
	{
		bool b1 = a & (1<<i);
		bool b2 = b & (1<<i);
		
		bool xorbit = (b1 & b2) ? 0 : (b1|b2);
		res <<= 1;
		res |= xorbit;
	}*/
	
	//efficient approach
	int res = (~a|~b) & (a|b);
	return res;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int x, y;
		cin>>x>>y;
		cout<<xor_of_two_no(x, y)<<endl;
	}
	return 0;
}
