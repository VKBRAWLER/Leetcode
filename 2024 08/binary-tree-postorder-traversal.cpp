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
public:
  vector<int> ans;
  void traverse (TreeNode * node) {
    if (node->left) traverse(node->left);
    if (node->right) traverse(node->right);
    ans.push_back(node->val);
  }
  vector<int> postorderTraversal(TreeNode* root) {
    if (root) traverse(root);
    return ans;
  }
};