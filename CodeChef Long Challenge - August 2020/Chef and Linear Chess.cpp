#include <bits/stdc++.h>
using namespace std;

int main() {
	long int T;
	cin >> T;
	while(T--) {
	    long int N,K;
	    cin >> N >> K;
	    long int inp[1000];
	    long int minMoves = 1000000000, minVal = -1;
	    for(int i = 0; i < N; i++) {
	        cin >> inp[i];
	    }
	    for(int i = 0; i < N; i++) {
	        if(K % inp[i] == 0) {
	            long int temp = K/inp[i] - 1;
	            if(temp < minMoves) {
	                minMoves = temp;
	                minVal = inp[i];
	            }
	        }
	    }
	    cout << minVal << endl;
	}
	return 0;
}
