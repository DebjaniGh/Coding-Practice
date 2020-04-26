// convert the given temperature to Fahrenheit.
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

double cToF(int C)
{
    //Your code here
    double c = (double)C;
    double f = (9.0 * c)/5.0 + 32;
    return f;
}

int main()
{
    int T;//number of testcases
    int C,F;
    cin >> T; //input number of testcases
    while(T--){
        cin >> C;//input temperature in celscius
        cout << floor(cToF(C)) << endl; //print the output
    }
    return 0;
}
