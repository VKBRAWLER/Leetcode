#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minSteps(string s, string t) {
        pair<int, int> alpha[26] = {};
        for(int i = 0; i < s.size(); i++){
          alpha[s[i]-97].first++;
          alpha[t[i]-97].second++;
        }
        int num = 0;
        for (auto i : alpha) {
          if (i.first == i.second) continue;
          num += (i.first > i.second)?(i.first-i.second):(i.second-i.first);
        }
        return num/2;
     }
};
int main() {
  Solution s;
  cout << s.minSteps("bab", "aba") << endl;
  cout << s.minSteps("leetcode", "practice") << endl;
  cout << s.minSteps("anagram", "mangaar");
}