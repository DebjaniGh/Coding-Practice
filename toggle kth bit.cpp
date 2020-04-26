//toggle kth bit of a number
#include <iostream>
using namespace std;

int toggle_kth_bit(int n, int k)
{
    int temp = 1 << (k-1);
    return (n ^ temp);
}

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int num, k;
        cin>>num>>k;
        cout<<toggle_kth_bit(num, k)<<endl;
    }
    
	return 0;
}
