#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

//comparator function
bool f(int x, int y)
{
    return x > y;    
}

void VectorDemo()
{
    vector<int> v = {11, 2, 3, 14};
	
	sort(v.begin(), v.end());
	
	for(int  i = 0; i < v.size(); i++)
	    cout<<v[i]<<" ";
	cout<<endl;
	
/*	bool present = binary_search(v.begin(), v.end(), 3);
	cout<<"3 is present: "<<present<<endl;
	
	present = binary_search(v.begin(), v.end(), 4);
	cout<<"4 is present: "<<present<<endl; */

	
	v.push_back(100);
	v.push_back(100);
	v.push_back(100);
	v.push_back(100);
	v.push_back(123);
	
    vector<int>::iterator it;
/*		for(it = v.begin(); it != v.end(); it++)
	    cout<<*it<<" ";
	cout<<endl;
	*/
	vector<int>::iterator it1 = lower_bound(v.begin(), v.end(), 100);   //gives the no >= 100
	vector<int>::iterator it2 = upper_bound(v.begin(), v.end(), 100);   //gives the no > 100
	cout<<*it1<<" "<<*it2<<endl;
	cout<<it2 - it1<<endl;
	
	sort(v.begin(), v.end(), f);    //descending sort
	for(it = v.begin(); it != v.end(); it++)
	    cout<<*it<<" ";
	cout<<endl;
	
	//this also iterates over the vector
	for(int x: v)
	    cout<<x<<" ";
	cout<<endl;
	
	for(int &x: v)  //iterates through reference. so any change made here will affect your actual vector
	    x++;
	    
	for(int x: v)
	    cout<<x<<" ";
	cout<<endl;
}

void SetDemo()
{
    set<int> S;
    S.insert(19);
    S.insert(20);
    S.insert(0);
    S.insert(-1);
    S.insert(89);
    S.insert(-5);
    
    for(int x: S)
        cout<<x<<" ";
    cout<<endl;
    
    auto it = S.find(-1);
    if(it == S.end())
        cout<<"Not present"<<endl;
    else
    {
        cout<<"Present"<<endl;
        cout<<*it<<endl;
    }
    
    auto it1 = S.lower_bound(0);
    auto it3 = S.lower_bound(-2);
    
    auto it2 = S.upper_bound(0);
    auto it4 = S.upper_bound(-2);
    
    cout<<*it1<<" "<<*it3<<" "<<*it2<<" "<<*it4<<endl;
    
    auto it5 = S.upper_bound(90);
    if(it5 == S.end())
        cout<<"Not present"<<endl;
}

int main() {
	SetDemo();
	return 0;
}

