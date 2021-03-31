// Problem Link : https://www.codechef.com/START2C/problems/T20MCH

#include <iostream>
#include <string>
#define ll long long
using namespace std;

string canTeamWin(ll R, ll O, ll C) {
    ll remO = 20 - O;
    ll remR = R - C;
    ll possibleR = remO * 6 * 6;
    return possibleR > remR ? "YES" : "NO";
}

int main() {
    ll R,O,C;
    cin >> R >> O >> C;
    cout << canTeamWin(R,O,C) << endl;
}
