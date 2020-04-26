//prime no or not

#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    //Your code here
    int i;
    if(n <= 1) return false;
    if(n <= 3) return true;

    if((n % 2 == 0) || (n % 3) == 0)
        return false;
    
    //a prime no is of the form 6k(+-)1
    //when we do n%i==0, we are checking for 6k-1,
    //and when we do n%(i+2)==0, we are checking for 6k+1
    for(i = 5; i * i <= n; i += 6)
    {
        if((n % i == 0) || (n % (i + 2) == 0))
            return false;
    }
}

int main()
{
    int T; //testcases
    cin>>T; //input testcases
    while(T--) //while testcase have not been exhausted
    {
        int N;
        cin>>N; //input n
        
        if(isPrime(N)) 
        cout<<"Yes";
        else
            cout<<"No";
            
        cout << endl;
    }
    return 0;
}
