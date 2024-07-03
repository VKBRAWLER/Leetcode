#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
  int findPoisonedDuration(vector<int>& timeSeries, int duration) {
    std::ios_base::sync_with_stdio(false);
    int p = duration;
    for (int i = timeSeries.size()-1; i > 0; i--) {
      p += min(duration, timeSeries[i]-timeSeries[i-1]);
    }
    return p;
  }
};