#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
      int i = 0, j = 0;
      while (i < nums1.size() && j < nums2.size()) {
        if (nums1[i] == nums2[j]) return nums1[i];
        else if (nums1[i] > nums2[j]) j++;
        else i++;
      }
      return -1;
    }
};
int main() {
  Solution s;
  vector<int> nums1 = {1,2,3};
  vector<int> nums2 = {2,4};
  cout << s.getCommon(nums1, nums2) << endl;
  nums1 = {1,2,3,6}, nums2 = {2,3,4,5};
  cout << s.getCommon(nums1, nums2) << endl;
}