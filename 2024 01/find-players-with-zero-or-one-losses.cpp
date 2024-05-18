#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
      set<int> win;
      set<int> lose;
      set<int> loser;
      for (auto i: matches) {
        if ((lose.find(i[0]) == lose.end()) && (loser.find(i[0]) == loser.end())) { win.insert(i[0]);}
        if (loser.find(i[1]) != loser.end()) { continue; }
        if (win.find(i[1]) != win.end()) {win.erase(i[1]); }
        if (lose.find(i[1]) != lose.end()) { lose.erase(i[1]); loser.insert(i[1]); }
        else { lose.insert(i[1]); }
      }
      vector<int> v1(win.begin(), win.end());
      vector<int> v2(lose.begin(), lose.end());
      return {v1,v2};
    }
};
int main() {
  Solution s;
  vector<vector<int>> matches = {{1,3},{2,3},{3,6},{5,6},{5,7},{4,5},{4,8},{4,9},{10,4},{10,9}};
  for (auto i : s.findWinners(matches)) { for (auto j : i) { cout << j << ' '; } cout<<endl; }
  matches = {{2,3},{1,3},{5,4},{6,4}};
  for (auto i : s.findWinners(matches)) { for (auto j : i) { cout << j << ' '; } cout<<endl; }
  matches = {{1,5},{2,5},{2,8},{2,9},{3,8},{4,7},{4,9},{5,7},{6,8}};
  for (auto i : s.findWinners(matches)) { for (auto j : i) { cout << j << ' '; } cout<<endl; }

}