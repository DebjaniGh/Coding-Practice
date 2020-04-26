//addition under modulo 
//You are given two numbers a and b. You need to find the sum of a and b under modulo M.

#include <bits/stdc++.h>
using namespace std;

int sumUnderModulo(long long a,long long b)
{
    int M=1000000007;
    //your code here
    return (a%M + b%M)%M;
}

int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    long long a;
	    long long b;
	    cin>>a>>b;
	    cout<<sumUnderModulo(a,b)<<endl;
	}
	return 0;
}
