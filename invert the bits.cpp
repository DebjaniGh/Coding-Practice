//invert the bits of n
#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    unsigned int n, i;
	    cin>>n;
	    for(i = 0; i < 32; i++)
	        n ^= (1<<i);
	    cout<<n<<endl;
	}
	return 0;
}
