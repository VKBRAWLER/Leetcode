#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minimumLength(string s) {
      if (s.size() <= 1) return 1;
      int i = 0, j = s.size() - 1;
      while (i != j) {
        if (s[i] != s[j]) return (j-i+1);
        while (i != j) {
          i++;
          if (s[i] != s[j]) break;
        }
        if (i == j) return 0;
        while (i != j) {
          j--;
          if (s[j] != s[i-1]) break;
        }
        if (i == j) return 1;
      }
      return 0;
    }
};
int main() {
  Solution s;
  cout << s.minimumLength("ca") << endl;
  cout << s.minimumLength("cabaabac") << endl;
  cout << s.minimumLength("aabccabba") << endl;
  cout << s.minimumLength("bbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbccbcbcbccbbabbb") << endl;
  cout << s.minimumLength("c") << endl;
}