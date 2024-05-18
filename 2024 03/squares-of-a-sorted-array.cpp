 #include<iostream>
 #include<bits/stdc++.h>
 using namespace std;
 class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++) {
          nums[i] *= nums[i];
        }
        sort(nums.begin(), nums.end());
        return nums;
    }
};
 int main() {
  Solution s;
  vector<int> nums = {-4,-1,0,3,10};
  for (auto i: s.sortedSquares(nums)) { cout << i << ' '; }
  cout << endl;
  nums = {-7,-3,2,3,11};
  for (auto i: s.sortedSquares(nums)) { cout << i << ' '; }
  cout << endl;

 }