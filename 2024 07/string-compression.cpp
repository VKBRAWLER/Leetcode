#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
  int compress(vector<char>& chars) {
    int n = chars.size();
    if (n == 1) return 1;
    int l = 0, c = 1, i = 1;
    for (; i < n; i++) {
      if (chars[i] != chars[i-1]) {
        chars[l++] = chars[i-1];
        if (c > 1) {
          string numChar = to_string(c);
          for (int j = 0; j < numChar.size(); j++) { chars[l++] = numChar[j]; }
        }
        c = 1;
      }
      else c++;
    }
    chars[l++] = chars[i-1];
    if (c > 1) {
      string numChar = to_string(c);
      for (int j = 0; j < numChar.size(); j++) { chars[l++] = numChar[j]; }
    }
    chars.resize(l);
    return l;
  }
};
int main() {
  Solution s;
  vector<char> chars = {'a','a','b','b','c','c','c'};
  cout << s.compress(chars) << endl;
  chars = {'a'};
  cout << s.compress(chars) << endl;
  chars = {'a','b','b','b','b','b','b','b','b','b','b','b','b'};
  cout << s.compress(chars) << endl;
}