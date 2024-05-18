#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
      int n = nums.size(), max = 0, count;
      if (n == 1) return 1;
      sort(nums.begin(), nums.end());
      for (int i = 0; i < n; i++) {
          int m = 1;
          while(i < n-1 && nums[i] == nums[i+1]) { m++; i++; } 
          if (m == max) count++;
          else if (m > max) {max = m; count = 1;}
      }
      return max*count;
    }
};
// i = 3
// m = 4
int main() {
  Solution s;
  vector<int>nums = {1,2,2,3,1,4};
  cout << s.maxFrequencyElements(nums) << endl;
  nums = {1,2,3,4,5};
  cout << s.maxFrequencyElements(nums) << endl;
  nums = {10,12,11,9,6,19,11};  // 6,9,9,10,11,12,19
  cout << s.maxFrequencyElements(nums) << endl;
  nums = {1,1,1,1};
  cout << s.maxFrequencyElements(nums) << endl;
}