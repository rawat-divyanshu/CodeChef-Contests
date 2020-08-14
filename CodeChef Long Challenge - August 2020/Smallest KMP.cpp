#include <bits/stdc++.h>
using namespace std;

string flsw(string s, int start, int end, string pattern) {
    int mid = start + (end - start)/2;
    string lm;
    if(s.at(mid) > pattern.at(0)) {
        lm = pattern + s;
        for(int i = 0; i <= mid + 1; i++) {
            if((s.substr(0,i + 1) + pattern + s.substr(i + 1,s.size())).compare(lm) < 0) {
                lm = s.substr(0,i + 1) + pattern + s.substr(i + 1,s.size());
            }
        }
        return lm;
    } else {
        lm = s + pattern;
        for(int i = mid; i < s.size(); i++) {
            if((s.substr(0,i + 1) + pattern + s.substr(i + 1,s.size())).compare(lm) < 0) {
                lm = s.substr(0,i + 1) + pattern + s.substr(i + 1,s.size());
            }
        }
        return lm;
    }
}

int main() {
    long long t;
    cin >> t;

    while(t--) {
        string str;
        string pattern;

        cin >> str;
        cin >> pattern;
        
        for(auto ch : pattern) {
            size_t pos = str.find(ch); 
            if (pos != string::npos) {
                str.erase(pos,1);
            }
        }
        sort(str.begin(), str.end());
        cout << flsw(str,0,str.size() - 1,pattern) << endl;
    }
}