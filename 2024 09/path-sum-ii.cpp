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
  int targetSum, target = 0;
  vector<vector<int>> list;
  vector<int> curr;
  void traverse (TreeNode *node) {
    target += node->val;
    curr.push_back(node->val);
    if (!node->left && !node->right && target == targetSum) list.push_back(curr);
    if (node->left) traverse(node->left);
    if (node->right) traverse(node->right);
    target -= node->val;
    curr.pop_back();
  };
public:
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
      if (!root) return list;
      this->targetSum = targetSum;
      traverse(root);
      return list;
    }
};