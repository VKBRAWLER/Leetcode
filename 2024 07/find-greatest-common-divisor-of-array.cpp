#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
  int findGCD(vector<int>& nums) {
    int a = nums[0];
    int b = nums[0];
    for (int i : nums) { if (i < a) a = i; else if (i > b) b = i; }
    while (b != 0) { int r = a % b; a = b ; b = r ; }
    return a;
  }
};
int main() {
  Solution s;
  vector<int> nums = {4,5,6,9,7};
  cout << s.findGCD(nums);
}