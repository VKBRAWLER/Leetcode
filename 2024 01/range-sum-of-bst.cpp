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
    int rangeSumBST(TreeNode* root, int low, int high) {
      if (!root) { return 0; }
      int currentVal = (root->val >= low && root->val <= high) ? root->val : 0;
      int leftSum = rangeSumBST(root->left, low, high);
      int rightSum = rangeSumBST(root->right, low, high);
      return currentVal + leftSum + rightSum;
    }
};
int main() {
  Solution s;
  TreeNode* root = new TreeNode(10, new TreeNode(5, new TreeNode(3), new TreeNode(7)), new TreeNode(15, nullptr, new TreeNode(18)));
  cout << s.rangeSumBST(root,7,15) << endl;
  root = new TreeNode(10, new TreeNode(5, new TreeNode(3, new TreeNode(1), new TreeNode(6)), new TreeNode(7)), new TreeNode(15, new TreeNode(13), new TreeNode(18)));
  cout << s.rangeSumBST(root,6,10) << endl;
}