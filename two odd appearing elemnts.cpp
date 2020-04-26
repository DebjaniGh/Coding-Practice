//find two odd appearing numbers
#include <iostream>
using namespace std;

void odd_appearing_numbers(int A[], int n)
{
    int i, res1 = 0, res2 = 0, xr = 0;
    
    //finds the XOR of all the array elements
    for(i = 0; i < n ;i++)
        xr = xr ^ A[i];
    
    /*find the rightmost set bit in XOR. That bit is 1 in 
    one of the odd appearing numbers and 0 in the other.
    that's why in XOR, that bit was set. Divide the array into
    2 groups - one whose kth bit (k = rsb in xor) is set and
    another whose kth bit is not set. now do XOR of the elements 
    in these 2 groups.*/
    
    //find the rightmost set bit in XOR.
    int rsb = xr ^ ~(xr-1);
    
    for(i = 0; i < n ;i++)
    {
        if((A[i] & rsb) != 0)
            res1 = res1 ^ A[i];
        else
            res2 = res2 ^ A[i];
    }
    cout<<"The two odd appearing elements are "<<res1<<" and "<<res2<<endl;
}
int main() {
	int A[] = {3, 4, 3, 4, 4, 4, 32, 7, 7, 3, 17, 32};
	odd_appearing_numbers(A, 12);
	return 0;
}
