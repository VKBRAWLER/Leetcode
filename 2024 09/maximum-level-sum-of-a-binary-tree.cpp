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
    int maxLevelSum(TreeNode* root) {
      if (!root) return 0;
      stack<TreeNode *> lvl;
      lvl.push(root);
      pair <int, int> m = {root->val, 1};
      for (int i = 1; !lvl.empty(); i++) {
        stack<TreeNode *> nextLvl;
        int sum = 0;
        while (!lvl.empty()) {
          sum += lvl.top()->val;
          if (lvl.top()->left) nextLvl.push(lvl.top()->left);
          if (lvl.top()->right) nextLvl.push(lvl.top()->right);
          lvl.pop();
        }
        if (sum > m.first) m = {sum, i};
        lvl = nextLvl;
      }
      return m.second;
    }
};
int main() {
  
}