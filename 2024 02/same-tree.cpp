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
    bool traverse(TreeNode* a, TreeNode* b) {
      if (a->val != b->val) return false;
      if (a->left == nullptr || b->left == nullptr) {
        if (!(a->left == nullptr && b->left == nullptr)) return false;
      }
      else {
        if (traverse(a->left, b->left) == false) return false;
      }
      if (a->right == nullptr || b->right == nullptr) {
        if (!(a->right == nullptr && b->right == nullptr)) return false;
      }
      else {
        if (traverse(a->right, b->right) == false) return false;
      }
      return true;
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
      if (p == nullptr || q == nullptr) {
        if (!(p == nullptr && q == nullptr)) return false;
        else return true;
      }
      return traverse(p,q);
    }
};
int main() {
  Solution s;
  TreeNode* p = new TreeNode(1, new TreeNode(2), new TreeNode(3));
  TreeNode* q = new TreeNode(1, new TreeNode(2), new TreeNode(3));
  cout << s.isSameTree(p,q) << endl;
  p = new TreeNode(1, new TreeNode(2), nullptr);
  q = new TreeNode(1, nullptr, new TreeNode(2));
  cout << s.isSameTree(p, q) << endl;
  p = new TreeNode(1, new TreeNode(2), new TreeNode(1));
  q = new TreeNode(1, new TreeNode(1), new TreeNode(2));
  cout << s.isSameTree(p, q) << endl;
  p = nullptr;
  q = new TreeNode(1, new TreeNode(1), new TreeNode(2));
  cout << s.isSameTree(p, q) << endl;
}