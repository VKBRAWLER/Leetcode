#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
  vector<int> productExceptSelf(vector<int>& nums) {
    int n = nums.size();
    vector<int> ans(n,1);
    int cur = nums[0];
    for (int i = 1; i < n; i++) { ans[i] = cur; cur *= nums[i]; }
    cur = nums[n-1];
    for (int i = n-2; i >= 0; i--) { ans[i] *= cur; cur *= nums[i]; }
    return ans;
  }
};
int main() {
  Solution s;
  vector<int> nums = {1,2,3,4};
  for (int i : s.productExceptSelf(nums)) { cout << i << " "; }
}