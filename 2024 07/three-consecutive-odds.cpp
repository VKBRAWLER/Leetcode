#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
  bool threeConsecutiveOdds(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n-2;) {
      if (arr[i++]%2 && arr[i++]%2 && arr[i++]%2) return true; 
    }
    return false;
  }
};
int main() {
  vector<int> arr = {1,2,34,3,4,5,7,23,12};
  Solution s;
  cout << s.threeConsecutiveOdds(arr);
}