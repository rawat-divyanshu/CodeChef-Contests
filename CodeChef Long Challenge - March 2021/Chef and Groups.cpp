// Problem Link : https://www.codechef.com/MARCH21C/problems/GROUPS

#include <bits/stdc++.h>
using namespace std;

int totalGroups(string row) {
  int totalGroups = 0;
  int currentSeat = 0;
  int rowLength = row.length();

  while(currentSeat < rowLength) {
    if(row[currentSeat] == '1') {
      ++totalGroups;
      while(row[currentSeat] == '1') {
        ++currentSeat;
      }
    } else {
      ++currentSeat;
    }
  }
  return totalGroups;
}

int main() {
  int T;
  cin >> T;
  while(T--) {
    string row;
    cin >> row;
    cout << totalGroups(row) << endl;
  }
  return 0;
}