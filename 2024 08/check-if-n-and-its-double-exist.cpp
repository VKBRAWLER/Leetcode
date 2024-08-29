#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
  bool checkIfExist(vector<int>& arr) {
    unordered_set<int> seen;
    for (int i : arr) {
      if ((seen.find(2 * i) != seen.end()) || (i % 2 == 0 && seen.find(i / 2) != seen.end())) return true;
      seen.insert(i);
    }
    return false;
  }
};