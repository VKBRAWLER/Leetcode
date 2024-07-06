#include<iostream>
#include<bits/stdc++.h>
#include<iostream>
#include <algorithm>
using namespace std;
class Solution {
public:
  int maximumWealth(vector<vector<int>>& accounts) {
    int MAXI = 0;
    for (auto i : accounts) {
      int m = 0;
      for (int j : i) { m += j; }
      MAXI = max(MAXI, m);
    }
    return MAXI;
  }
};