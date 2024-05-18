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
void traverse(TreeNode *head) {
    if (head != NULL) {
        traverse(head->left);
        cout << head->val << ' ';
        traverse(head->right);
    }
    return;
}
class Solution {
public:
  vector<int> loc;
  int amountOfTime(TreeNode* root, int start) {
    find_loc(root, &start);
    // for (auto i : loc) { cout << i << ' '; }
    // cout << endl;
    if (loc.size() == 0) { return max_height(root, -1); }
    int before_start = 0;
    for (auto i : loc) {
      int max_h;
      if (i == 0) { max_h = max_height(root->right, 0); root = root->left; }
      else if (i == 1) { max_h = max_height(root->left, 0); root = root->right; }
      before_start = (before_start > max_h)? before_start: max_h;
      // cout << before_start << ' ';
      before_start++;
    }
    //  cout<<root->val;
    if (!(root->left || root->right)) return before_start;
    int after_start = max_height(root, -1);
    return (before_start > after_start)? before_start: after_start;
  }
  void find_loc(TreeNode* node, int *num) {
    if (node != NULL) {
      if (node->val == *num) { *num = 0; return;} 
      loc.push_back(0);
      find_loc(node->left, num);
      if (*num == 0) return;
      loc.pop_back();
      loc.push_back(1);
      find_loc(node->right, num);
      if (*num == 0) return;
      loc.pop_back();
    }
    return;
  }
  int max_height(TreeNode *node, int h) {
    int next_h = 0;
    if (node != NULL) {
      next_h++;
      int left = max_height(node->left, next_h);
      int right = max_height(node->right, next_h);
      next_h = (left > right)?(left):(right);
    }
    return h + next_h;
  }
};
int main() {
  Solution s1, s2, s3;
  TreeNode* root = new TreeNode(1, 
    new TreeNode(5, nullptr, new TreeNode(4, new TreeNode(9), new TreeNode(2))), 
    new TreeNode(3, new TreeNode(10), new TreeNode(6))
    );
  int start = 3;
  cout << s1.amountOfTime(root, start) << endl;
  root = new TreeNode(1);
  start = 1;
  cout << s2.amountOfTime(root, start) << endl;
  root = new TreeNode(1, new TreeNode(2, new TreeNode(3, new TreeNode(4, new TreeNode(5), nullptr), nullptr), nullptr), nullptr);
  start = 2;
  cout << s3.amountOfTime(root, start);
}