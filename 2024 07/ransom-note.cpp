#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(0); cin.tie(0);
    }
  bool canConstruct(string ransomNote, string magazine) {
    vector<int> hm(26);
    for (int i = 0; i < magazine.size(); i++) { hm[magazine[i] - 97]++; }
    for (char c : ransomNote) { if (hm[c-97]) hm[c-97]--; else return false; }
    return true;
  }
};