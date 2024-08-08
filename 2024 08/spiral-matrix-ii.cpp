#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
  vector<vector<int>> generateMatrix(int n) {
    vector<vector<int>> matrix(n, vector<int>(n));
    int num = 0, r = n, c = n, i = 0, j = -1, Direction = 1;
    bool ROWorCOL = true; // true = Row, left
    while (num < n*n) {
      if (ROWorCOL) {
        for (int run = 0; run < r; run++) {
          num++; j += Direction;
          matrix[i][j] = num;
        }
        c--;
      }
      else {
        for (int run = 0; run < c; run++) {
          num++; i += Direction;
          matrix[i][j] = num;
        }
        r--;
        Direction *= -1;
      }
      ROWorCOL = !ROWorCOL;
    }
    return matrix;
  }
};
int main() {
  
}