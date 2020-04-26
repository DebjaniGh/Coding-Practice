#include <bits/stdc++.h>
using namespace std;

int absolute(int I);

int main()
{
    int T;    // number of testcases
    cin >> T; // input number of testcases
    while (T--) {
        int I;
        cin >> I;
        cout << absolute(I) << endl; // print the output
    }
    return 0;
}

// return absolute value of I

int absolute(int I) {
    return abs(I);
}

