#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
  int rob(vector<int>& nums) {
    int rob = 0;
    int norob = 0;
    for (int i = 0; i < nums.size(); i++) {
      int newRob = norob + nums[i];
      int newNoRob = max(norob, rob);
      rob = newRob;
      norob = newNoRob;
    }
    return max(rob, norob);
  }
};
int main() {
  Solution s;
  vector<int> nums = {1,2,3,1};
  cout << s.rob(nums);
}