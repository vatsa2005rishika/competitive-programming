class Solution {

    int depth = 0;
    int max_depth = 0;
    int temp = 0;
    int sum = 0;

    public int deepestLeavesSum(TreeNode root) {
        traverse_depth(root);
        traverse_sum(root);
        return sum;
    }

    void traverse_depth(TreeNode root) {
        if (root == null)
            return;

        depth++;

        if (root.left == null && root.right == null) {
            max_depth = Math.max(max_depth, depth);
        }

        traverse_depth(root.left);
        traverse_depth(root.right);

        depth--;
    }

    void traverse_sum(TreeNode root) {
        if (root == null)
            return;

        temp++;

        if (temp == max_depth && root.left == null && root.right == null) {
            sum += root.val;
        }

        traverse_sum(root.left);
        traverse_sum(root.right);

        temp--;
    }
}
