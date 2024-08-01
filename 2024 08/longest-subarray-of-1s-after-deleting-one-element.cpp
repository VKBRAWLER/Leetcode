#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
  int longestSubarray(vector<int>& nums) {
    int MAX = 0, prev = 0, count = 0;
    bool noZero = true;
    for (int i = 0; i < nums.size(); i++) {
      if (nums[i]) count++;
      else {
        noZero = false;
        MAX = max(MAX, prev+count);
        if (i+1 < nums.size() && nums[i+1]) {
          prev = count;
        }
        else prev = 0;
        count = 0;
      }
    }
    if (noZero) return count-1;
    return max(MAX, prev+count);
  }
};