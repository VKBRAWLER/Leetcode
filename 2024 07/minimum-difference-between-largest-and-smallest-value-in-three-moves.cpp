#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
  int minDifference(vector<int>& nums) {
    int numsSize = nums.size();
    if (numsSize <= 4) return 0;
    int minDiff = INT_MAX;
    partial_sort(nums.begin(), nums.begin() + 4, nums.end());
    nth_element(nums.begin() + 4, nums.begin() + (numsSize - 4), nums.end());
    sort(nums.begin() + (numsSize - 4), nums.end());
    for (int left = 0, right = numsSize - 4; left < 4; left++, right++) {
      minDiff = min(minDiff, nums[right] - nums[left]);
    }
    return minDiff;
  }
}; 
int main() {
  Solution s;
  vector<int> nums = {2,5,8,4,2,7,8,2,5,1,10,9};
  cout << s.minDifference(nums);  
}