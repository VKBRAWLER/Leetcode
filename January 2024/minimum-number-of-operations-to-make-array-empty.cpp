#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minOperations(vector<int>& nums) {
      sort(nums.begin(), nums.end());
      int opera = 0;
      for (int i = 0; i < nums.size(); i++) {
        int count = 1, j = i;
        while ((j < nums.size() - 1) && (nums[j] == nums[j+1])) { count++; j++; }
        if (count == 1) { return -1; }
        if (count % 3 == 0) { opera += count/3; }
        else { opera += count/3 + 1; }
        i = j;
      }
      return opera;
    }
};
int main() {
  Solution s;
  vector<int> nums = {2,3,3,2,2,4,2,3,4};
  // {2,2,2,2,3,3,3,4,4}
  cout << s.minOperations(nums) << endl;
  nums = {2,1,2,2,3,3};
  cout << s.minOperations(nums);
}