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
private:
  stack<int> MaxN;
  int ans = 0;
  void traverse(TreeNode* node) {
    if (node->val >= MaxN.top()) { ans++; MaxN.push(node->val); }
    else MaxN.push(MaxN.top());
    if (node->left) traverse(node->left);
    if (node->right) traverse(node->right);
    MaxN.pop();
  }
public:
  int goodNodes(TreeNode* root) {
    if (!root->left && !root->right) return 1;
    MaxN.push(root->val);
    traverse(root);
    return ans;
  }
};