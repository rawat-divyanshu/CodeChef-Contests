// Problem Link : https://www.codechef.com/START2C/problems/NOBEL

#include <bits/stdc++.h>
#define ll long long
using namespace std;

string willWinPrize(ll N, ll M, ll* rTopics) {
    unordered_map<ll,bool> takenTopics;

    for(ll i = 0; i < N; ++i) {
        if(takenTopics.find(rTopics[i]) == takenTopics.end()) {
            takenTopics[rTopics[i]] = true;
        }
    }

    ll tt = takenTopics.size();

    return tt < M ? "YES" : "NO";
}

int main() {
    ll T;
    cin >> T;
    while(T--) {
        ll N,M;
        cin >> N >> M;
        ll rTopics[100005];
        
        for(ll i = 0; i < N; ++i)
            cin >> rTopics[i];

        cout << willWinPrize(N,M,rTopics) << endl;
    }
    return 0;
}
