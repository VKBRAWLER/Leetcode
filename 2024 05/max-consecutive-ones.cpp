#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        if (n == 1) return nums[0];
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
};