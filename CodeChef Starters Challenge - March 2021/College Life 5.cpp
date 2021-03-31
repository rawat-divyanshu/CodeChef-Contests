// Problem Link : https://www.codechef.com/START2C/problems/COLGLF5

#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll countSwitchTimes(ll M, ll* footballE, ll N, ll* cricketE) {
    ll ans = 0;
    int c = 1;

    ll fc = 0, cc = 0;

    while(fc < M && cc < N) {
        if(footballE[fc] < cricketE[cc]) {
            if(c < 0) {
                ++ans;
                c = 1;
            }
            ++fc;
        } else {
            if(c > 0) {
                ++ans;
                c = -1;
            }
            ++cc;
        }
    }

    if(fc < M) {
        if(c < 0) {
            ++ans;
        }
    }

    if(cc < N) {
        if(c > 0) {
            ++ans;
        }
    }

    return ans;
}

int main() {
    ll T;
    cin >> T;

    while(T--) {
        ll N,M;
        cin >> M >> N;
        ll footballE[25005];
        ll cricketE[25005];

        for(ll i = 0; i < M; ++i)
            cin >> footballE[i];

        for(ll i = 0; i < N; ++i)
            cin >> cricketE[i];

        cout << countSwitchTimes(M,footballE,N,cricketE) << endl;        
    }
    return 0;
}