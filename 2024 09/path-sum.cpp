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
  int target = 0;
public:
  bool hasPathSum(TreeNode* root, int targetSum) {
    if (!root) return false;
    target += root->val;
    if (!root->left && !root->right && target == targetSum) return true;
    if (root->left && hasPathSum(root->left, targetSum)) return true;
    if (root->right && hasPathSum(root->right, targetSum)) return true;
    target -= root->val;
    return false;
  }
};