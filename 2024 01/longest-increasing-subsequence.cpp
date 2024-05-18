#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
      int len = nums.size();
      vector<int> new_nums(len, 1);
      for (int i = 1; i < len; ++i) {
        for (int j = 0; j < i; ++j) {
          if (nums[i] > nums[j]) {
            new_nums[i] = max(new_nums[i], new_nums[j] + 1);
          }
        }
      }
      return *max_element(new_nums.begin(), new_nums.end());
    }
};

int main() {
  Solution s;
  vector<int> nums = {10,9,2,5,3,7,101,18};
  cout << s.lengthOfLIS(nums) << endl;
  nums = {0,1,0,3,2,3};
  // cout << s.lengthOfLIS(nums) << endl;
}