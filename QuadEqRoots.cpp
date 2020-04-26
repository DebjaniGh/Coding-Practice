/* C++ program to find roots of a quadratic equation */
#include <bits/stdc++.h>
using namespace std;

void quadraticRoots(int a,int b, int c)
{
   //Your code here
    int D, x, y;
    D = b*b - 4*a*c;
    if(D < 0)
        cout<<"Imaginary";
    else if(D > 0)
    {
        x = floor((-b + sqrt(D)) / (2.0 * a));
        y = floor((-b - sqrt(D)) / (2.0 * a));
        cout<<x<<" "<<y;
    }
    else
    {
        x = floor(-b/(2.0 * a));
        cout<<x<<" "<<x;
    }
}

int main() {
	int T; 
	cin>>T; //input number of testcases
	
	while(T--)
	{
	    int a, b, c; 
	    cin>>a>>b>>c; //Input a, b, and c
	    
	    quadraticRoots(a,b,c);
	    cout<<endl;
	    
	}
	return 0;
}
