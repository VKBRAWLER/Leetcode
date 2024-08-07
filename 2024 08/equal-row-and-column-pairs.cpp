  #include<iostream>
  #include<bits/stdc++.h>
  using namespace std;
  class Solution {
  public:
    int equalPairs(vector<vector<int>>& grid) {
      int count = 0;
      set<vector<int>> res;
      unordered_map<int, vector<int>> duplicate;
      for(int i = 0; i < grid.size(); ++i) {
        if (res.find(grid[i]) != res.end()) {
          duplicate[i] = grid[i];
          // if the row already exists, then in case of a duplicate, it has to be counted multiple times
        } 
        res.insert(grid[i]);
      }
      for(int i = 0; i < grid.size(); ++i){
        vector<int> temp;
        for(int j = 0; j <  grid.size(); ++j){
          temp.push_back(grid[j][i]);
        }
        if(res.find(temp) != res.end()) {
          for(auto& it: duplicate){
          //  itterate through duplicate unordered_map to add duplicate rows
            if(it.second == temp){
              ++count;
            }
          }
          ++count;
          cout << i << " ";
        } 
      }


      return count;
    }
  };