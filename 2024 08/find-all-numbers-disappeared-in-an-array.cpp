#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
  vector<int> findDisappearedNumbers(vector<int>& nums) {
    vector<int> hm(nums.size());
    for (int i : nums) { if (i > 0 && i <= nums.size()) hm[i-1]++; }
    vector<int> ans;
    for (int i = 0; i < hm.size(); i++) { if (!hm[i]) ans.push_back(i+1); }
    return ans;
  }
};