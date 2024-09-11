#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool canJump(vector<int>& nums) {
      if (nums[0] == 0 && nums.size() > 1) return false;
      if (nums[0] >= nums.size()-1) return true;
      int n = nums.size()-1;
      for (int i = 0; i <= n; i++) { nums[i] = (i+nums[i]); }
      int MaxIdx = nums[0], i = 1;
      while (i < n) {
        int j = MaxIdx;
        while (i <= j) {
          MaxIdx = max(MaxIdx, nums[i]);
          i++;
        }
        if (MaxIdx >= n) return true;
        else if (MaxIdx < i) return false;
      }
      return true;
    }
};