#include <iostream>
#include <vector>
using namespace std;

int main() {
    
	vector<int> n1, n2;
	for(int i = 0; i < 5; i++)
	    n1.push_back(i+1);
	    
	for(int i = 0; i < 5; i++)
	    n2.push_back(i+2);
	
	cout<<"n1 size: "<<n1.size()<<" "<<"n2 size: "<<n2.size()<<endl;
	
	//print n1
	for(int j = 0; j < 5; j++)
	    cout<<n1[j]<<" ";
	cout<<endl;
    
    //print n2
    for(int j = 0; j < 5; j++)
	    cout<<n2[j]<<" ";
	cout<<endl;
	
	n1.swap(n2);
	cout<<"After swapping: "<<endl;
	
	//print n1
	for(int j = 0; j < 5; j++)
	    cout<<n1[j]<<" ";
	cout<<endl;
    
    //print n2
    for(int j = 0; j < 5; j++)
	    cout<<n2[j]<<" ";
	cout<<endl;
	
	return 0;
}
