//given two numbers a, b count the no of bits that need to be flipped in a to get b
#include <iostream>
using namespace std;

int count_set_bits(int x)
{
    int count = 0;
    while(x != 0)
    {
        x &= (x-1);
        count++;
    }
    return count;
}

int count_no_of_bits(int a , int b)
{
    int xor_res = a^b;
    return count_set_bits(xor_res);
}

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int a, b;
        cin>>a>>b;
        cout<<"No. of bits that need to be flipped: "<<count_no_of_bits(a, b)<<endl;
    }
	return 0;
}
