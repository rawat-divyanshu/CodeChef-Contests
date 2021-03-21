// Problem Link : https://www.codechef.com/COOK127C/problems/PAWRI

#include <bits/stdc++.h>
using namespace std;

string pawriMeme(string str) {
    size_t idx = 0;
    while (true) {
        idx = str.find("party", idx);
        if (idx == std::string::npos) break;
        str.replace(idx, 5, "pawri");
        idx += 5;
    }
    return str;
}

int main() {
    int T;
    cin >> T;

    while(T--) {
        string str;
        cin >> str;
        cout << pawriMeme(str) << endl;
    }
    return 0;
}
