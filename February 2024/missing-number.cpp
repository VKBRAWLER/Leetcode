#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
  int missingNumber(vector<int>& nums) {
    if (nums.size() == 1) {
      return (nums[0]?0:1);
    };
    sort(nums.begin(), nums.end());
    int i = 0;
    while (i < nums.size()) {
      if (i != nums[i]) break;
      i++;
    }
    return i;
  }
};
int main() {
  Solution s;
  vector<int> nums = {3,0,1};
  cout << s.missingNumber(nums) << endl;
  nums = {0,1};
  cout << s.missingNumber(nums) << endl;
  nums = {9,6,4,2,3,5,7,0,1};
  cout << s.missingNumber(nums) << endl;
}