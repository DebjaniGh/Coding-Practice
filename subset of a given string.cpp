//Program to print all subsets of a set given as string

#include <iostream>
using namespace std;

void powerSet(string str, int index = 0, string curr = " ")
{
    int n = str.length();
    
    if(index == n)
    {
        cout<<curr<<" ";
        return;
    }
    
    powerSet(str, index + 1, curr);
    powerSet(str, index + 1, curr + str[index]);
}

int main() {
	string str = "abcd";
	powerSet(str);
	return 0;
}
