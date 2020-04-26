//Given an integer N. The task is to find the number of digits that appear in its factorial
#include<bits/stdc++.h>
using namespace std;

/* log(10!) = log(10*9*8*7*.....1) = log(10) + log(9) + log(8) + .... + log(1)
take the floor of this sum and add 1 to get no of digits */

int digitsInFactorial(int N)
{
    //Your code here
    int i;
    double sum = 0.0;
    if(N < 0)
        return 0;
    else if(N <= 1)
        return 1;
    else
    {
        for(i = 2; i <= N; i++)
            sum += log10(i);
        return floor(sum) + 1;
    }
}

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        cout<<digitsInFactorial(N)<<endl;
    }
    return 0;
}
