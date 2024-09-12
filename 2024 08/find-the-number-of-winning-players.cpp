#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int winningPlayerCount(int n, vector<vector<int>>& pick) {
        vector<vector<int>> s(n, vector<int>(11));
        for (int i = 0; i < pick.size(); i++) {
          s[pick[i][0]][pick[i][1]]++;
        }
        int count = 0;
        for (int i = 0; i < n; i++) {
          for (int j = 0; j < 11; j++) {
            if (s[i][j] > i) { count++; break;} 
          }
        }
        return count;
    }
};