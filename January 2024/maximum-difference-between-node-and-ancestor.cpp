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
  vector<int>nums;
    int diff = 0;
    int maxAncestorDiff(TreeNode* root) {
      minmaxChild(root);
      return diff;
    }
    void minmaxChild(TreeNode* node) {
      if (!node) return;
      bool op = true;
      if (nums.size() == 0) { nums.push_back(node->val); op = false; }
      else if (node->val >= nums.back()) { nums.push_back(node->val); }
      else if (node->val <= nums.front()) { nums.insert(nums.begin(), node->val); }
      else { op = false; }
      if (op) {check_diff();}
      minmaxChild(node->left);
      minmaxChild(node->right);
      if (node->val == nums.front()) nums.erase(nums.begin());  
      else if (node->val == nums.back()) nums.erase(nums.end() - 1);
    }
    void check_diff() {
      int new_diff = nums.back() - nums.front();
      if (new_diff > diff) { diff = new_diff; }
    }
};
int main() {
  Solution s1,s2;
  TreeNode* root = new TreeNode(8, new TreeNode(3, new TreeNode(1), new TreeNode(6, new TreeNode(4), new TreeNode(7))), new TreeNode(10, nullptr, new TreeNode(14, new TreeNode(13), nullptr)));
  cout << s1.maxAncestorDiff(root) << endl;
  root = new TreeNode(1, nullptr, new TreeNode(2, nullptr, new TreeNode(0, new TreeNode(3), nullptr)));
  cout << s2.maxAncestorDiff(root) << endl; 
}