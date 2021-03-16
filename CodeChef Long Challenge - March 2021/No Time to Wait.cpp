// Problem Link : https://www.codechef.com/MARCH21C/problems/NOTIME

#include <iostream>
using namespace std;

bool canSolveProblem(int N, int* tz, int H, int x) {
    for(int i = 0; i < N; i++) {
        if(tz[i] + x >= H) {
            return true;
        }
    }
    return false;
}

int main() {
    int H, N, x;
    cin >> N >> H >> x;
    int* tz = new int[N];

    for(int i = 0; i < N; i++)
        cin >> tz[i];

    if(canSolveProblem(N,tz,H,x)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
