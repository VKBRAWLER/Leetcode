#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int count = 0;
    void bfs(int node, int n, vector<vector<pair<int, int>>>& adj) {
        queue<int> q;
        vector<bool> visit(n);
        q.push(node);
        visit[node] = true;

        while (!q.empty()) {
            node = q.front();
            q.pop();
            for (auto& p : adj[node]) {
                int neighbor = p.first;
                int sign = p.second;
                if (!visit[neighbor]) {
                    count += sign;
                    visit[neighbor] = true;
                    q.push(neighbor);
                }
            }
        }
    }

    int minReorder(int n, vector<vector<int>>& connections) {
        vector<vector<pair<int, int>>> adj(n);
        for (auto& connection : connections) {
            adj[connection[0]].push_back({connection[1], 1});
            adj[connection[1]].push_back({connection[0], 0});
        }
        bfs(0, n, adj);
        return count;
    }
};