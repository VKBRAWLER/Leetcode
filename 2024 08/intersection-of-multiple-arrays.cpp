#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
  vector<int> intersection(vector<vector<int>>& nums) {
    unordered_map<int,int> m;
    for(int i=0;i<nums.size();i++) {
      for(int j=0;j<nums[i].size();j++) {
        m[nums[i][j]]++;
      }
    }
    vector<int> v;
    for(auto i:m) {
      if(i.second==nums.size()) v.push_back(i.first);
    }
    sort(v.begin(),v.end());
    return v;
  }
};
int main() {
  Solution s;
  vector<vector<int>> nums = {{3,1,2,4,5}, {1,2,3,4}, {3,4,5,6}};
  vector<int> ans = s.intersection(nums);
}