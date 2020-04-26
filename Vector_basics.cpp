#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> v1(10);
	int i;
	if(v1.empty() == true)
	    cout<<"Vector empty"<<endl;
	else
	    cout<<"Vector not empty"<<endl;
	
	//shows vector not empty   
	for(i = 0; i < v1.size(); i++)
	    cout<<v1[i]<<" ";
	cout<<endl;
	
	//initialize vector with elements
	for(i = 0; i < v1.size(); i++)
	    v1[i] = i+5;
	cout<<"Size: "<<v1.size()<<endl;
	cout<<"Capacity: "<<v1.capacity()<<endl;
	
	if(v1.empty() == true)
	    cout<<"Vector empty"<<endl;
	else
	    cout<<"Vector not empty"<<endl;

    //traversing vector using iterator	    
	for(auto j = v1.begin(); j != v1.end(); j++)
	    cout<<*j<<" ";
	cout<<endl;
	
	//appending elements to vector
	for(i = 0; i < 5; i++)
	    v1.push_back(i+10);
	cout<<"Size: "<<v1.size()<<endl;
	cout<<"Capacity: "<<v1.capacity()<<endl;
	
	for(auto j = v1.begin(); j != v1.end(); j++)
	    cout<<*j<<" ";
	cout<<endl;
	return 0;
}
