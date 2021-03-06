#include <bits/stdc++.h>

using namespace std;

void toh(int n, int from, int to, int aux, long long &moves);

int main() {

    int T;
    cin >> T;
    while (T--) {
        long long moves = 0;
        int N;
        cin >> N;
        toh(N, 1, 3, 2, moves);
        cout << moves << endl;
    }
    return 0;
}

void toh(int n, int from, int to, int aux, long long &moves) {

    if(n == 1)
    {
        cout<<"move disk 1 from rod "<<from<<" to rod "<<to<<endl;
        moves++;
        return;
    }
    
    toh(n-1, from, aux, to, moves);
    cout<<"move disk "<<n<<" from rod "<<from<<" to rod "<<to<<endl;
    moves++;
    toh(n-1, aux, to, from, moves);
}

