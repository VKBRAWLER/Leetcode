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
  vector<int> count = vector<int>(10, 0);
  int pal = 0;
  // even=false odd=true
  bool order = false;
  void checkPal() {
    int odd = 0;
    for (int i = 1; i <= 9; i++) {
      if (count[i]%2) odd++;
      if (odd > 1) return;
    }
    if (order == odd) pal++;
  }
  void traverseTree(TreeNode* node) {
    count[node->val]++;
    order = !order;
    if (!(node->left || node->right)) checkPal();
    else {
      if (node->left) traverseTree(node->left);
      if (node->right) traverseTree(node->right);
    }
    count[node->val]--;
    order = !order;
  }
  int pseudoPalindromicPaths (TreeNode* root) {
    if (!(root->left || root->right)) return 1;
    traverseTree(root);
    return pal;
  }
};
int main() {
  Solution s1,s2,s3;
  TreeNode* root = new TreeNode(2, new TreeNode(3, new TreeNode(3), new TreeNode(1)), new TreeNode(1, nullptr, new TreeNode(1)));
  cout << s1.pseudoPalindromicPaths(root) << endl;
  root = new TreeNode(2, new TreeNode(1, new TreeNode(1), new TreeNode(3, nullptr, new TreeNode(1))), new TreeNode(1));
  cout << s2.pseudoPalindromicPaths(root) << endl;
  root = new TreeNode(9, nullptr, nullptr);
  cout << s3.pseudoPalindromicPaths(root) << endl;
  
}