// Problem Link : https://www.codechef.com/COOK127C/problems/WEIGHTBL

#include <bits/stdc++.h>
using namespace std;

int isMachineCorrect(int w1, int w2, int x1, int x2, int M) {
    if(x1*M + w1 > w2 || x1*M + w1 < w2) return 0;
    if(x1*M + w1 == w2 || x2*M + w1 == w2) return 1;
    return 1;    
}

int main() {
    int T;
    cin >> T;

    while(T--) {
        int w1,w2,x1,x2,M;
        cin >> w1 >> w2 >> x1 >> x2 >> M;
        cout << isMachineCorrect(w1,w2,x1,x2,M) << endl;
    }
    return 0;
}
