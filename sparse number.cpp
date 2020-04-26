// C++ program to check if n is sparse or not.
//A number is said to be a sparse number if no two or more consecutive bits are set  in the binary representation.
#include<iostream>
using namespace std;

bool isSparse(int n){
    
    if((n & (n>>1)) == 0)
        return 1;
    else
        return 0;
}

int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        
        if(isSparse(n)){
            cout << "1" << endl;
        }
        else cout << "0" << endl;
        
    }
    return 0;
}
