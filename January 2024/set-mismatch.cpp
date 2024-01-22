#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
      sort(nums.begin(), nums.end());
      int dup = 0, miss = 0;
      if (nums[0] != 1) miss = 1;
      if (nums.size() == 2) { if (nums[0] == 1) return {1,2}; else return {2,1}; }
      for (int i = 0; (!dup || !miss) && i < nums.size() - 1; i++) {
        if (!dup && (nums[i] == nums[i+1])) { dup = nums[i]; }
        else if (!miss && ((nums[i] + 1) != nums[i+1])) { miss = nums[i] + 1;}
      }
      if (!miss) miss = *nums.rbegin() + 1;
      return {dup, miss};
    }
};
int main() {
  Solution s;
  vector<int> nums = {1,2,2,4};
  cout << s.findErrorNums(nums)[0] << " " << s.findErrorNums(nums)[1] << endl;
  nums = {1,1};
  cout << s.findErrorNums(nums)[0] << " " << s.findErrorNums(nums)[1] << endl;
  nums = {2,2};
  cout << s.findErrorNums(nums)[0] << " " << s.findErrorNums(nums)[1] << endl;
  nums = {3,2,2};
  cout << s.findErrorNums(nums)[0] << " " << s.findErrorNums(nums)[1] << endl;
}