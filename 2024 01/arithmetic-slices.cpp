#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
      int m = nums.size();
      if (m < 3) return 0;
      int count = 0;
      for (int i = 0; i < m - 2; i++) {
          int dif = nums[i+1] - nums[i];
          for (int j = i+2; j < m; j++) {
            if (nums[j] - nums[j-1] == dif) count++;
            else break;
          }
      }
      return count;
    }
};
int main() {
  Solution s;
  vector<int> nums = {1,2,3,4};
  cout << s.numberOfArithmeticSlices(nums) << endl;
  nums = {1};
  cout << s.numberOfArithmeticSlices(nums) << endl;
}