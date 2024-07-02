#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> MySet;
        for(auto i: nums1) {
            MySet.insert(i);
        }
        vector<int> arr(MySet.begin(), MySet.end());
        vector<int> res;
        for(int i=0; i<arr.size(); i++) {
            if(find(nums2.begin(), nums2.end(), arr[i]) != nums2.end()) res.push_back(arr[i]);
        }
        return res;
    }
};
int main() {
  
}