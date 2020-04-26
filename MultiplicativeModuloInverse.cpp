//modular multiplicative inverse

#include<iostream>
using namespace std;

int extendedEuclidGCD(int a, int b, int *x, int *y);

int modInverse(int a, int m)
{
    //a*x when divided by m will give remainder 1
    //x exists iff gcd(a,m) = 1
    int x, y, g;
 
    if(m == 1)
        return -1;

    g = extendedEuclidGCD(a, m, &x, &y); //find gcd(a,m) using Euclid's algo
    //cout<<g<<endl;
    
    if(g != 1)
        return -1;
    else
    {
        int res = (x%m + m)%m;
        return res;
    }
}

int extendedEuclidGCD(int a, int b, int *x, int *y)
{
    //GCD(0,b) = b
    if(a == 0)
    {
        *x = 0, *y = 1;
        return b;
    }
    int x1, y1;
    int g = extendedEuclidGCD(b%a, a, &x1, &y1);
    
    *x = y1 - (b/a) * x1;
    *y = x1;
    
    return g;
}

int main()
{
	int T;
	cin>>T;
	while(T--){
		int a,m;
		cin>>a>>m;
		cout << modInverse(a, m)<<endl;
	}
    return 0;
}
