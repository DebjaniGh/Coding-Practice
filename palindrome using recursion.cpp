//palindrome using recursion

#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string str, int s, int e)
{
	if (str[s] != str[e]) return false;
	
	else if(s == e) return true;	//for odd length palindrome, both s & e will converge at the middle character
	
	else if (s > e) return true;	//for even length palindrome, s will cross e
	
	else return isPalindrome(str, s+1, e-1);
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		if(isPalindrome(s, 0, s.length() - 1))
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;
	}
}
