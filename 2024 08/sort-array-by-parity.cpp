#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
  vector<int> sortArrayByParity(vector<int>& nums) {
    if (nums.size() == 1) return nums;
    int j = nums[0]%2 ? 0 : 1;
    for (int i = 1; i < nums.size(); i++) {
      if (!(nums[i]%2)) {
        if (i != j) swap(nums[i], nums[j]); 
        j++;
      }
    }
    return nums;
  }
};