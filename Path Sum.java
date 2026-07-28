class Solution {
    int sum = 0;
    boolean flag = false;

    public boolean hasPathSum(TreeNode root, int targetSum) {
        if (root == null)
            return false;

        sum += root.val;

        if (root.left == null && root.right == null) {
            if (sum == targetSum)
                flag = true;
        }

        hasPathSum(root.left, targetSum);
        hasPathSum(root.right, targetSum);

        sum -= root.val;   

        return flag;
    }
}
