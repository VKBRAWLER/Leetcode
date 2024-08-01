#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int largestAltitude(vector<int>& gain) {
      if (gain.size() == 1) return (gain[0] > 0 ? gain[0] : 0);
      int highest = gain[0] > 0 ? gain[0] : 0;
      for (int i = 1; i < gain.size(); i++) {
        gain[i] += gain[i-1];
        highest = max(highest, gain[i]);
      }
      return highest;
    }
};