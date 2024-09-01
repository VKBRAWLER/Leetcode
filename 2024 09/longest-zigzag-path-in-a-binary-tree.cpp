#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode() : val(0), left(nullptr), right(nullptr) {}
  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
  int M = 1;
  void longZigZag (TreeNode *node, int sum, bool dir) {
    if (!node) return;
    M = max(M, sum);
    if (dir) {
      longZigZag(node->left, 1, true);
      longZigZag(node->right, sum+1, false);
    }
    else {
      longZigZag(node->left, sum+1, true);
      longZigZag(node->right, 1, false);
    }
  }
public:
  int longestZigZag(TreeNode* root) {
    if (!root || (!root->left && !root->right)) return 0;
    longZigZag(root, 0, true);
    return M;    
  }
};
int main() {
  
}