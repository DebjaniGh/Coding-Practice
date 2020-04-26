#include <iostream>
#include <map>
#include <string>
using namespace std;

//usimg maps, we can count the frequency of characters occuring in a string
void mapDemo()
{
    map<char, int> cnt;
    string s = "Debjani Ghosh";

    for(char c: s)
    {
        cnt[c]++;
    }
    cout<<cnt['a']<<" "<<cnt['h']<<" "<<cnt['z']<<endl;
}

int main() {
	mapDemo();
	return 0;
}
