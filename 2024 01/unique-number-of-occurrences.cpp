#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
      sort(arr.begin(), arr.end());
      int i = 0, count = 1;
      set<int> occ;
      while (i < arr.size()-1) {
        if (arr[i] == arr[i+1]) { count++;}
        else {
          if (occ.find(count) != occ.end()) return false; 
          occ.insert(count);
          count = 1;
        }
        i++;
      }
      if (occ.find(count) != occ.end()) return false; 
      occ.insert(count);
      return true;
    }
};
int main() {
  Solution s;
  vector<int> arr = {1,2,2,1,1,3};
  cout << s.uniqueOccurrences(arr) << endl;
  arr = {1,2};
  cout << s.uniqueOccurrences(arr) << endl;
  arr = {-3,0,1,-3,1,1,1,-3,10,0};
  cout << s.uniqueOccurrences(arr) << endl;
}