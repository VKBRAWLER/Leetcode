#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
  bool buddyStrings(string s, string goal) {
    if (s.size() != goal.size()) return false;
    vector<char> hm(26);
    vector <int> NotInPlace;
    for (int i = 0; i < s.size(); i++) {
      hm[s[i] - 'a']++;
      if (s[i] != goal[i]) {
        NotInPlace.push_back(i);
        if (NotInPlace.size() == 2) {
          if (!(s[NotInPlace[0]] == goal[NotInPlace[1]] && s[NotInPlace[1]] == goal[NotInPlace[0]])) return false;
        }
        else if (NotInPlace.size() > 2) return false;
      }
    }
    if (NotInPlace.size() == 2) return true;
    if (NotInPlace.size() == 0) {
      for (int i = 0; i < 26; i++) {
        if (hm[i] > 1) return true;
      }
    }
    return false;
  }
};