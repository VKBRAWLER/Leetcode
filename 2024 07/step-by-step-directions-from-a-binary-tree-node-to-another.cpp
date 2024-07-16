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
  string pos = "", st = "", ds = "";
  void Search(TreeNode* root, int startValue, int destValue) {
    if (root != nullptr && (st == "" || ds == "")) {
      if (root->val == startValue && st == "") st = pos;
      else if (root->val == destValue && ds == "") ds = pos;
      pos.append("L");
      Search(root->left, startValue, destValue);
      pos[pos.size() - 1] = 'R';
      Search(root->right, startValue, destValue);
      pos.pop_back();
    }
    else return;
  }
  string getDirections(TreeNode* root, int startValue, int destValue) {
    if (root->val == startValue) st = "U";
    if (root->val == destValue) ds = "U";
    Search(root, startValue, destValue);
    if (st == "U") st = "";
    if (ds == "U") ds = "";
    int i = 0;
    for (; i < st.size() && i < ds.size(); i++) {
      if (st[i] != ds[i]) break;
    }
    pos = "";
    if (i == st.size()) return ds.substr(i);
    if (i == ds.size()) return string(st.size() - i, 'U');
    return string(st.size() - i, 'U') + ds.substr(i);
  }
};