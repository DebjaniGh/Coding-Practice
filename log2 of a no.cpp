//program to compute log2 of a number

#include <iostream>
using namespace std;

int log2(int x)
{
    int res = 0;
    while(x >>= 1)
        res++;

    return res;
}

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int num;
        cin>>num;
        cout<<"log2 "<<num<<" = "<<log2(num)<<endl;
    }
    
	return 0;
}
