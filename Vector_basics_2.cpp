#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> v;
	v.assign(6,9);  //assigns 9 six times
	
	//print the vector elements
	for(int i = 0; i < v.size(); i++)
	    cout<<v[i]<<" ";
	cout<<endl;
	
	for(int i = 0; i < 3; i++)
	    v.push_back(i+10);   //appends elements to the vector
	for(int i = 0; i < v.size(); i++)
	    cout<<v[i]<<" ";
	cout<<endl;
	cout<<"Last element: "<<v.back()<<endl;
	
	v.pop_back();   //deletes last element
	cout<<"Last element: "<<v.back()<<endl;
	
		return 0;
}
