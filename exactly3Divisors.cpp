/*Given a positive integer value N. The task is to find how many numbers less than or equal to N 
have numbers of divisors exactly equal to 3.*/

#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    if(n <= 1)  return false;
    if(n <= 3)  return true;
    
    if((n % 2 == 0) || (n % 3 == 0))
        return false;
    
    for(int i = 5; i * i <= n; i += 6)
    {
        if((n % i == 0) || (n % (i + 2) == 0))
            return false;
    }
}

bool isPerfectSquare(int n)
{
    float sqr = sqrt(n);
    if(sqr - floor(sqr) == 0)
        return true;
    else
        return false;
}

int exactly3Divisors(int N)
{
    //only those no.s whose square roots are prime have exactly 3 divisors. 
    //eg - 4 has exactly 3 divisors - 1, sqrt(4) & 4.
    int count = 0;
    for(int i = 4; i <= N; i++)
    {
        if(isPerfectSquare(i))		//if i is a perfect square then check if its root is a prime no
        {
            if(isPrime(sqrt(i)))
            count++;
        }
    }
    return count;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		cout<<exactly3Divisors(n)<<endl;
	}
return 0;
}
