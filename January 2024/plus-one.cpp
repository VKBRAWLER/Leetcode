#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
  vector<int> plusOne(vector<int>& digits) {
    if (digits.back() == 9) {
      digits.back() = 0;
      vector<int>::reverse_iterator i = ++digits.rbegin();
      while(1) {
        // cout << "g";
        if (i == digits.rend()) { digits.insert(digits.begin(), 1); break; }
        else if (*i != 9) { (*i)++; break; }
        else { *i = 0; }
        i++;
      }
    }
    else { digits.back()++; }
    return digits;
  }
};
int main() {
  Solution s;
  vector<int> ans = {9,9};
  // cout << *(ans.rbegin());
  vector<int> n = s.plusOne(ans);
  for (int j = 0; j < n.size(); j++) { cout << n[j] << ' '; }
}