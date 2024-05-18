import java.util.LinkedList;
import java.util.Queue;

class TreeNode {
    int val;
    TreeNode left;
    TreeNode right;
    TreeNode() {}
    TreeNode(int val) { this.val = val; }
    TreeNode(int val, TreeNode left, TreeNode right) {
        this.val = val;
        this.left = left;
        this.right = right;
    }
}

class Solution {
  public TreeNode addOneRow(TreeNode root, int val, int depth) {
    if (depth == 1) return new TreeNode(val, root, null);
    if (depth == 2) {
      root.left = new TreeNode(val, root.left, null);
      root.right = new TreeNode(val, null, root.right);
      return root;
    }
    Queue<TreeNode> queue = new LinkedList();
    if (root.left != null) queue.add(root.left);
    if (root.right != null) queue.add(root.right);
    int n;
    for (int i = 2; i < depth-1; i++) {
      n = queue.size();
      for (int j = 0; j < n; j++) {
        if (queue.peek().left != null) queue.add(queue.peek().left);
        if (queue.peek().right != null) queue.add(queue.peek().right);
        queue.poll();
      }
    }
    for (TreeNode node : queue) {
      node.left = new TreeNode(val, node.left, null);
      node.right = new TreeNode(val, null, node.right);
    }
    return root;
  }
}

class leetcode {
  public static void main(String[] args) {
    Solution s = new Solution();
    TreeNode root = new TreeNode(1, new TreeNode(2, new TreeNode(4), null), new TreeNode(3));
    TreeNode Rroot = s.addOneRow(root, 5, 4);
  }
}