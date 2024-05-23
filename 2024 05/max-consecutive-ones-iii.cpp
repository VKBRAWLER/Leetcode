// max-consecutive-ones-iii
#include<iostream>
#include <stdlib.h>
#include<vector>
using namespace std;
class Solution {
public:
  int longestOnes(vector<int>& nums, int k) {
    int n = nums.size();
    if (n == 1) return nums[0];
    if (k == 0) {
      int max_len = 0;
      int len = 0;
      for (int i = 0; i < n; i++) {
        if (nums[i]) {
          len++;
        }
        else {
          max_len = max(max_len, len);
          len = 0;
        }
      }
      return max(max_len, len);
    }
    vector<int> indx;
    for (int i = 0; i < n; i++) { if (nums[i] == 0) indx.push_back(i); }
    int m = indx.size();
    if (m <= k) return n;
    if (m == n) return k;
    if (m == n-1) return k+1;
    // for (int i: indx) { cout << i << " "; } cout << endl;
    int s = 0, max_len = indx[k];
    // cout << max_len << " ";
    for (int e = k+1; e < m; e++, s++) {
      // cout << (indx[e]) << " ";
      max_len = max(max_len, (indx[e] - indx[s] - 1));
    }
    return max(max_len, n - indx[s] - 1);
  }
};
int main() {
  Solution s;
  vector<int> nums = {1,1,1,0,0,0,1,1,1,1,0};

  cout << s.longestOnes(nums, 2) << endl;
}

// 3,4,5,10 | 11