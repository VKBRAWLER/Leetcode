#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
  int chalkReplacer(vector<int>& chalk, int k) {
    if (k < chalk[0]) return 0;
    vector<long long> Schalk (chalk.size());
    Schalk[0] = chalk[0];
    for (int i = 1; i < Schalk.size(); i++) {
      Schalk[i] = Schalk[i-1] + chalk[i];
      if (k < Schalk[i]) return i;
    }
    int a = 0, b = Schalk.size()-1;
    k %= Schalk[b];
    while (a < b) {
      int c = (a+b)/2;
      if (Schalk[c] <= k) a = c+1;
      else b = c;
    }
    return b;
  }
};
int main() {
  Solution s;
  vector<int> chalk = {3,4,1,2};
  cout << " " << s.chalkReplacer(chalk, 25);
}