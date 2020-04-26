//You are given a number N. Find the total count of set bits for all numbers from 1 to N(both inclusive).

#include<iostream>
using namespace std;

int countSetBits(int n){
    /* Traverse i from 1 to n
    Naive method: do bitwise AND between j and 1. if the result is 1, 
    increment count. Now ignore the last bit of 1 by dividing j by 2. 
    
    int i, count = 0, j; 
    for(i = 1; i <= n; i++)
    {
        j = i;
        while(j > 0)
        {
            if((j & 1) == 1)
                count++;
            j >>= 1;
        }
    }
    return count; */
    
    /*Brian and Kernigham Method: do bitwise AND between n & n-1. 
    This operation turns off the rightmost set bit of n.  */
    int i, count = 0, j; 
    for(i = 1; i <= n; i++)
    {
        j = i;
        while(j > 0)
        {
            j &= (j - 1);
            count++;
        }
    }
    return count;
}

int main()
{
	 int t;
	 cin>>t;// input testcases
	 while(t--) //while testcases exist
	 {
	       int n;
	       cin>>n; //input n
	       
	       cout << countSetBits(n) << endl;// print the answer
	  }
	  return 0;
}
