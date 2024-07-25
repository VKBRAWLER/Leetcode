#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
  int maxOperations(vector<int>& nums, int k) {
    sort(nums.begin(), nums.end());
    int n = nums.size(), c = 0;
    for (int i = 0, j = n-1; i < j;) {
      if (nums[i] + nums[j] == k) { c++; i++; j--; }
      else if (nums[i] + nums[j] > k) j--;
      else if (nums[i] + nums[j] < k) i++;      
    }
    return c;
  }
};