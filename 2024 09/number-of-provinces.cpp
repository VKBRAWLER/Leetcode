#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
  int findCircleNum(vector<vector<int>>& isConnected) {
    queue<int> dfs;
    dfs.push(0);
    int visited = 0;
    int i = 1, province = 1;
    while (visited < isConnected.size()) {
      if (dfs.empty()) {
        while (isConnected[i][0] == -1) { i++; }
        province++; dfs.push(i);
      }
      if (isConnected[dfs.front()][0] != -1) {
        for (int j = 0; j < isConnected[dfs.front()].size(); j++) {
          if (isConnected[dfs.front()][j] && dfs.front() != j) dfs.push(j);
        }
        isConnected[dfs.front()] = {-1};
        visited++;
      }
      dfs.pop();
    }
    return province;
  }
};