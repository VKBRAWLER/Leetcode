#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
  vector<bool> hm;
  queue<int> Queue;
  bool BFS(int a, int target) {
    if (!hm[a]) {
      if (a == target) return true;
      else { hm[a] = true; Queue.push(a); }
    }
    return false;
  }
  bool canMeasureWater(int x, int y, int target) {
    int cap = x+y;
    if (cap < target) return false;
    Queue.push(0);
    hm.resize(cap + 1, 0);
    hm[0] = true;
    while (!Queue.empty()) {
      int a = Queue.front();
      if (a+x <= cap && BFS(a+x, target)) return true;
      if (a-x > 0    && BFS(a-x, target)) return true;
      if (a+y <= cap && BFS(a+y, target)) return true;
      if (a-y > 0    && BFS(a-y, target)) return true;
      Queue.pop();
    }
    return false;
  }
};
int main() {
  Solution s1, s2;
  cout << s1.canMeasureWater(3,5,4) << endl;
  cout << s2.canMeasureWater(1,2,3) << endl;
}