#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
  int searchInsert(vector<int>& nums, int target) {
    int low = 0;
    int high = nums.size() - 1;
    int mid = low + (high - low)/ 2;
    while (low <= high) {
      mid = low + (high - low)/2;
      if (nums[mid] == target) return mid;
      else if (nums[mid] <= target) low = mid + 1;
      else high = mid - 1;
    }
    return low;
  }
};
int main() {
  Solution s;
  vector<int> nums = {1,3,5,6};
  cout << s.searchInsert(nums, 5) << endl;
  cout << s.searchInsert(nums, 2) << endl;
  cout << s.searchInsert(nums, 7) << endl;
}