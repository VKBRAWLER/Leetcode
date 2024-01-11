#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
      vector<bool> answer;
      for (int i = 0; i < l.size(); i++) {
        vector<int> ranged;
        ranged.insert(ranged.end(), nums.begin() + l[i], nums.begin() + r[i] + 1);
        sort(ranged.begin(), ranged.end());
        // for (auto j: ranged) { cout<<j<<' ';} cout<<endl;
        int dif = ranged[1] - ranged[0];
        bool a = true;
        for (int j = 0; j < ranged.size() - 1; j++) {
          if ((ranged[j+1]-ranged[j]) != dif) { a = false; break; }
        }
        answer.push_back(a);
      }
        return answer;
    }
};
int main() {
  Solution s;
  vector<int> nums = {4,6,5,9,3,7};
  vector<int> l = {0,0,2};
  vector<int> r = {2,3,5};
  for (auto i : s.checkArithmeticSubarrays(nums,l,r)) { cout << i << ' '; }
  cout << endl;
  nums = {-12,-9,-3,-12,-6,15,20,-25,-20,-15,-10};
  l = {0,1,6,4,8,7};
  r = {4,4,9,7,9,10};
  for (auto i : s.checkArithmeticSubarrays(nums,l,r)) { cout << i << ' '; }
  cout << endl;
}