#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
      int n = nums.size();
      if (n < k) return 0;
      double MAX = 0;
      for (int i = 0; i < k; i++) { MAX += nums[i]; }
      double curr = MAX; 
      for (int i = k; i < n; i++) {
        curr = curr + nums[i] - nums[i-k];
        MAX = max(MAX, curr);
      }
      return MAX/k;
    }
};
int main() {
  Solution s;
  vector<int> nums = {0,4,0,3,2};
  cout << s.findMaxAverage(nums, 1);
}