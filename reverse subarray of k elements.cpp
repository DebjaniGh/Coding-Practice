//Given an array arr[] of positive integers of size N. Reverse every sub-array of K group elements.
#include <bits/stdc++.h>
using namespace std;

// Function to reverse the array in groups
vector<long long> reverseInGroups(vector<long long> mv, int n, int k){
    
    vector<long long>::iterator it;
    it = mv.begin();
    int count = 0;
    while((count+k) <= n)
    {
        reverse(it+count, it+count+k);
        count += k;
    }
    reverse(it+count, mv.end());
    return mv;
    
}

int main() {
    
    int t; //Testcases
    cin >> t; //input the number of testcases

    while(t--){ //while testcases exist

        int n;
        cin >> n; //input the size of array
        
        vector<long long> mv; // Declaring a vector mv
        
        int k;
        cin >> k; //input k 

        for(long long i =0;i<n;i++){
            long long x;
            cin >> x; //input element of array

            mv.push_back(x); //push the element into vector
        }
        
        mv = reverseInGroups(mv, n, k);
        
        for(long long i =0;i<n;i++){
            cout << mv[i] << " "; //Just print the vector
        }

        cout << endl;       
   }
}

