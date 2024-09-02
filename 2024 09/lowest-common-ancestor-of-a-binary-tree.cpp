#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};   

class Solution {
  bool found = false;
  stack<TreeNode *> st;
  bool traverse(TreeNode* node, TreeNode* p, TreeNode* q) {
    if (!found) st.push(node);
    if (node == p || node == q) {
      if (found) return true;
      if (traverse(node, (node == p ? q : p))) return true;
      else found = true;
    }
    else {
      if (node->left && traverse(node->left, p, q)) return true;
      if (node->right && traverse(node->right, p, q)) return true;
    }
    if (node == st.top()) st.pop();
    return false;
  }
  bool traverse(TreeNode* node, TreeNode* rem) {
    if (node == rem) return true;
    if (node->left && traverse(node->left, rem)) return true;
    if (node->right && traverse(node->right, rem)) return true;
    return false;
  }
public:
  TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
    traverse(root, p , q);
    return st.top();
  }
};