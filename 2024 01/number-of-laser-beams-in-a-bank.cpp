#include<iostream>
#include <string>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
      int beam = 0, i = 0, x1 = 0;
      while (i < bank.size() - 1){ for(int x = 0; x < bank[i].size(); x++){ if (bank[i][x] == '1') x1++;} if (x1) break; i++; }
      int j = i+1;
      while (j < bank.size()) {
        int y1 = 0;
        while (j < bank.size()){ for(int y = 0; y < bank[j].size(); y++){ if (bank[j][y] == '1') y1++;} if (y1) break; j++; }
        if (y1) { beam += x1*y1; i = j; x1 = y1; }
        j++;
      }
      return beam;
    }
};
int main() {
  Solution s;
  vector<string> bank = {"011001","000000","010100","001000"};
  cout << s.numberOfBeams(bank) << endl;
  bank = {"000","111","000"};
  cout << s.numberOfBeams(bank) << endl;
}