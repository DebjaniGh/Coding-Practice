#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

void vectorDemo()
{
    int a[] = {100, 90, 78, 400, 67, 90, 47, 47, 68, 99, 99, 99};
    int size_arr = sizeof(a)/sizeof(a[0]);

    vector<int> v(a, a+size_arr);   //initialize vector with an array

    for(int i: v)
        cout<<i<<" ";
   /* for(auto i = v.begin(); i != v.end(); i++)
        cout<<*i<<" "; */
    cout<<endl;

    //count the occurences of 99
  /*  cout<<count(v.begin(), v.end(), 99)<<endl;

    //find if 68 is present
    find(v.begin(), v.end(), 68) != v.end()? cout<<"68 is present"<<endl:cout<<"NOt present"<<endl;
    find(v.begin(), v.end(), 12) != v.end()? cout<<"68 is present"<<endl:cout<<"NOt present"<<endl; */

    //remove duplicates from a vector
    int v_size = v.size();
    sort(v.begin(), v.end());

    cout<<"Vector after sorting: "<<endl;
    for(int i: v)
        cout<<i<<" ";
    cout<<endl;

    auto ip = unique(v.begin(), v.begin() + v_size);
    v.resize(distance(v.begin(), ip));

    cout<<"Vector after removing duplicates: "<<endl;
    for(ip = v.begin(); ip != v.end(); ip++)
        cout<<*ip<<" ";
    cout<<endl;
}

int main() {
    vectorDemo();
	return 0;
}
