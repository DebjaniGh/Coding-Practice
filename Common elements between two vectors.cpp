//You are given two sorted vectors of size n and m. You need to find the common elements.

#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> commonElements(vector<int>v1,vector<int>v2);


vector<int> commonElements(vector<int>v1, vector<int>v2)
{
    vector<int>v3(v1.size() + v2.size());
    vector<int>::iterator it, st;
    int count = 0;

    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());

    it = set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());
    for(st = v3.begin(); st != it; st++)
        count++;

    v3.resize(count);
    return v3;
}


int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    vector<int>v1,v2;
	    int n,m;
	    cin>>n>>m;
	    for(int i=0;i<n;i++)
	    {
	        int x;
	        cin>>x;
	        v1.push_back(x); //Taking input of first vector
	    }

	    for(int i=0;i<m;i++)
	    {
	        int x;
	        cin>>x;
	        v2.push_back(x); //Taking input of second vector
	    }

	    vector<int>v3=commonElements(v1,v2); //Third vector that holds return value of function
	    if(v3.size()!=0)
	    for(int i=0;i<v3.size();i++)
	      cout<<v3[i]<<" ";
	    else
	    cout<<"Empty"; //If v3 empty then print this
	    cout<<endl;
	}
	return 0;
}


  // } Driver Code Ends
