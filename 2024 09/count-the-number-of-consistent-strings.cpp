#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
      vector<bool> hm(26);
      for (int i = 0; i < allowed.size(); i++) { hm[allowed[i] - 'a'] = true; }
      int count = 0;
      for (int i = 0; i < words.size(); i++) {
        bool CountThis = true;
        for (char j : words[i]) {
          if (!hm[j - 'a']) { CountThis = false; break; }
        }
        count += CountThis;        
      }
      return count;
    }
};