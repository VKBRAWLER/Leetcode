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
    stack <int> a1;
    stack <int> a2;
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        traverse(root1, &a1);
        traverse(root2, &a2);
        while (a1.size() && a2.size()) {
            cout << a1.top() << ' ' << a2.top() << endl;
            if (a1.top() != a2.top()) return false;
            a1.pop(); a2.pop();
        }
        if (a1.size() != a2.size()) return false;
        return true;
    }
    void traverse (TreeNode* root, stack<int> *arr) {
        if (root != NULL) {
            traverse(root->left, arr);
                if (root->left == NULL && root->right== NULL) arr->push(root->val);
            traverse(root->right, arr);
        }
    }
};
int main() {
  Solution s;
  TreeNode* root1 = new TreeNode(3,new TreeNode(5,new TreeNode(6),new TreeNode(2,new TreeNode(7),new TreeNode(4))),new TreeNode(1,new TreeNode(9),new TreeNode(8)));
  TreeNode* root2 = new TreeNode(3, new TreeNode(5, new TreeNode(6), new TreeNode(7)), new TreeNode(1, new TreeNode(4), new TreeNode(2, new TreeNode(9), new TreeNode(8))));
  cout << s.leafSimilar(root1, root2) << endl;
  root1 = new TreeNode(1, new TreeNode(3), new TreeNode(2));
  root2 = new TreeNode(1, new TreeNode(3), new TreeNode(2));
  cout << s.leafSimilar(root1, root2) << endl;
}