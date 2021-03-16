// Problem Link : https://www.codechef.com/MARCH21C/problems/IRSTXOR

#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll getMaxAB(ll C) {
    ll bitCount = 0;
    ll num = C;
    while(num = num >> 1) bitCount++;

    ll A = (1 << bitCount) - 1;
    ll B = A^C;
    return A*B;
}

int main() {
    ios_base::sync_with_stdio(0);  
    cin.tie(0);
    int T;
    cin >> T;
    while(T--) {
        ll C;
        cin >> C;
        cout << getMaxAB(C) << endl;
    }
    return 0;    
}
