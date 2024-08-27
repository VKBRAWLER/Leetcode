#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
  double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start_node, int end_node) {
    vector<double> maxProb(n, 0.0);
    maxProb[start_node] = 1.0;
    for (int i = 0; i < n - 1; ++i) {
      bool updated = false;
      for (int j = 0; j < edges.size(); ++j) {
        int u = edges[j][0];
        int v = edges[j][1];
        double prob = succProb[j];
        if (maxProb[u] * prob > maxProb[v]) {
          maxProb[v] = maxProb[u] * prob;
          updated = true;
        }
        if (maxProb[v] * prob > maxProb[u]) {
          maxProb[u] = maxProb[v] * prob;
          updated = true;
        }
      }
      if (!updated) break;
    }
    return maxProb[end_node];
  }
};
int main() {
  Solution s;
  vector<vector<int>> edges = {{1,4},{2,4},{0,4},{0,3},{0,2},{2,3}};
  vector<double> succProb = {0.37,0.17,0.93,0.23,0.39,0.04};
  cout << s.maxProbability(5,edges,succProb,3,4);
}