#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int t;
    cin >> t;
    int p, h;
    for(int i = 0; i < t; i++) {
        cin >> h >> p;
        while(h > 0 && p > 0) {
            h = h - p;
            p = floor(((double)p)/2);
        }
        if(h > 0) {
            cout << 0 << endl;
        } else {
            cout << 1 << endl;
        }
    }
    return 0;
}
