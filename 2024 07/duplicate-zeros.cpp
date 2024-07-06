#include<iostream>
#include <stdlib.h>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
      vector<int> ans(arr.size());
      int j = 0;
      for (int i = 0; j < ans.size(); i++) {
        if (arr[i]) ans[j++] = arr[i];
        else {
          ans[j++] = 0;
          if (j < ans.size()) ans[j++] = 0;
        }
      }
      arr = ans;
    }
};
int main() {
  
}