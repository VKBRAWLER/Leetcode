#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
  vector<vector<int>> findMatrix(vector<int>& nums) {
    vector<vector<int>> arr = {{}};
      int in_arr;
    for (int i = 0; i < nums.size(); i++) {
      in_arr = 0;
      for (int j = 0; j < arr.size(); j++) {
        int in_row = 0;
        for (int k = 0; k < arr[j].size(); k++) {
          if (nums[i] == arr[j][k]) { in_row = 1; break;}
        }
        if (!in_row) {arr[j].emplace_back(nums[i]); in_arr = 1; break; }
      }
      if (!in_arr) arr.push_back({nums[i]}); // repeated element in all rows inserted in a new row
    }
    return arr;
  }
};
int main() {
  Solution s;
  vector<int> nums = {1,3,4,1,2,3,1};
  vector<vector<int>> n = s.findMatrix(nums);
  for (int i = 0; i < n.size(); i++) { for (int j = 0; j < n[i].size(); j++) { cout << n[i][j] << ' '; } cout << "- "; }
  // nums = {2,1,1}; cout << endl;
  // n = s.findMatrix(nums);
  // for (int i = 0; i < n.size(); i++) { for (int j = 0; j < n[i].size(); j++) { cout << n[i][j] << ' '; } cout << endl; }
}