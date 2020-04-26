//how many bits are different in a no

#include<bits/stdc++.h>
using namespace std;


// Function to find number of bits to be flip
// to convert A to B
int countBitsFlip(int a, int b){
    
    int xr = a^b;
    int count = 0;
    while(xr > 0)
    {
        xr = xr & (xr-1);
        count++;
    }
    return count;
}

int main()
{
	int t;
	cin>>t;// input the testcases
	while(t--) //while testcases exist
	{
		int a,b;
		cin>>a>>b; //input a and b

		cout<<countBitsFlip(a, b)<<endl;
	}
	return 0;
}
