#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
  bool canVisitAllRooms(vector<vector<int>>& rooms) {
    queue<int> go;
    go.push(0);
    int visited = 0;
    while (!go.empty() && visited < rooms.size()) {
      if (!(rooms[go.front()].size() == 1 && rooms[go.front()][0] == -1)) {
        for (int i : rooms[go.front()]) { go.push(i); }
        rooms[go.front()] = {-1};
        visited++;
      }
      go.pop();
    }
    if (visited < rooms.size()) return false;
    return true;
  }
};