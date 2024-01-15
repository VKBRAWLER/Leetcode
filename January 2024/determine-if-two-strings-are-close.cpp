#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool closeStrings(string word1, string word2) {
      if (word1.size() != word2.size()) return false;
      vector<pair<char, char>> seq;
      pair<int, int> alpha[26] = {};
        for(int i = 0; i <  word1.size(); i++){
          alpha[word1[i]-97].first++;
          alpha[word2[i]-97].second++;
        }
      for (int i = 0; i < 26; i++) {
        if (alpha[i].first != alpha[i].second) {
          if (!alpha[i].second || !alpha[i].first) return false; 
          bool not_found = true;
          for(int j = i; j < 26; j++) {
            if (alpha[i].first == alpha[j].second) {
              alpha[j].second = alpha[i].second;
              not_found = false;
              break;
            }
          }
          if (not_found) { return false; }
        }
      }
      return true;
    }
};
int main() {
  Solution s;
  cout << s.closeStrings("abc","bca") << endl;
  cout << s.closeStrings("a","aa") << endl;
  cout << s.closeStrings("cabbba","abbccc") << endl;
}