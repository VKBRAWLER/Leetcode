#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
  long long zeroFilledSubarray(vector<int>& nums) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long ans = 0;
    long long len = 0;
    for(int i=0;i<nums.size();i++) {
      if (nums[i]==0) {
        len++;
      }
      else {
        ans += ((len)*(len+1))/2;
        len = 0;
      }
    }
    if (len>0) {
      ans += ((len)*(len+1))/2;
    }
    return ans;
  }
};
int main() {
  Solution s;
  vector<int> nums = {1,2,0,0,0,1,2,0,0,0,1,0,1,0,0,0,0};
  cout << s.zeroFilledSubarray(nums) << endl;
  nums = {0,1,0,0,1,0,0,0};
  cout << s.zeroFilledSubarray(nums);
  
}