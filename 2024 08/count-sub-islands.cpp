#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
private:
  bool ValidIsland = true;
  void TravelLand(int i, int j, vector<vector<int>> &grid) {
    if (grid[i][j] < 2) {
      if (grid[i][j] == -1) ValidIsland = false;
      return;
    }
    grid[i][j] = 0;
    if (i > 0) TravelLand(i-1, j, grid);
    if (j > 0) TravelLand(i, j-1, grid);
    if (i < grid.size()-1) TravelLand(i+1, j, grid);
    if (j < grid[0].size()-1) TravelLand(i, j+1, grid);
  }
public:
  int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
    for (int i = 0; i < grid1.size(); i++) {
      for (int j = 0; j < grid1[0].size(); j++) {
        if (grid1[i][j] == grid2[i][j]) { if (grid1[i][j]) grid1[i][j] = 2; }
        else if (grid2[i][j]) grid1[i][j] = -1;
      }
    }
    int SubIsland = 0;
    for (int i = 0; i < grid1.size(); i++) {
      for (int j = 0; j < grid1[0].size(); j++) {
        if (grid1[i][j] == 2) {
          TravelLand(i, j, grid1);
          if (ValidIsland) SubIsland++;
          ValidIsland = true;
        }
      }
    }
    return SubIsland;
  }
};
int main() {
  Solution s;
  vector<vector<int>> grid1 = {{1,1,1,0,0},{0,1,1,1,1},{0,0,0,0,0},{1,0,0,0,0},{1,1,0,1,1}};
  vector<vector<int>> grid2 = {{1,1,1,0,0},{0,0,1,1,1},{0,1,0,0,0},{1,0,1,1,0},{0,1,0,1,0}};
  cout << s.countSubIslands(grid1, grid2);
}