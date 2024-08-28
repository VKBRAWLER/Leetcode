#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
  int deleteGreatestValue(vector<vector<int>>& grid) {
     for(int i=0;i<grid.size();i++){
      sort(grid[i].begin(),grid[i].end());
    }
    int sum =0;
    for(int col=grid[0].size()-1;col>=0;col--){
      int mx = INT_MIN;
      for(int row = 0;row<grid.size();row++){
        mx = max(mx,grid[row][col]);
      }
      sum+=mx;
    }
    return sum;
  }
};