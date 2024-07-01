#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
  string mergeAlternately(string word1, string word2) {
    int n = word1.size();
    int m = word2.size();
    string ans = "";
    int i = 0, j = 0;
    while(i < n && j < m) {
      ans += word1[i++];
      ans += word2[j++];
    }
    while (i < n) { ans += word1[i++]; }
    while (j < m) { ans += word2[j++]; }
    return ans;
  }
};
int main() {
  Solution s;
  string word1 = "abc";
  string word2 = "pqr";
  cout << s.mergeAlternately(word1, word2) << endl;
}