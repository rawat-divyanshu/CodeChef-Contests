#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ll T;
    cin >> T;
    while(T--) {
        ll chefPower, rickPower;
        cin >> chefPower >> rickPower;
        ll temp;
        if((chefPower/9 < rickPower/9) || (chefPower/9 == rickPower/9 && chefPower%9 == 0 && rickPower%9 > 0)) {
            temp = chefPower/9;
            temp = chefPower%9 > 0 ? temp + 1 : temp;
            cout << 0 << " " << temp << endl;
        } else {
            temp = rickPower/9;
            temp = rickPower%9 > 0 ? temp + 1 : temp;
            cout << 1 << " " << temp << endl;
        }
    }
    return 0;
}
