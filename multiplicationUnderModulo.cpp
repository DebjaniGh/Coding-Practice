#include <bits/stdc++.h>
using namespace std;

int multiplicationUnderModulo(long long a,long long b)
{
    int m=1000000007;
    //your code here
    return (((a%m) * (b%m))%m);
}

int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    long long a;
	    long long b;
	    cin>>a>>b;
	    cout<<multiplicationUnderModulo(a,b)<<endl;
	}
	return 0;
}
