class Solution {
    int max=0;
    public int diameterOfBinaryTree(TreeNode root) {
       max=0;
       Traverse(root);
       return max;

    }

    public int Traverse(TreeNode node){
        if(node==null){
                return 0;
            }
            int left=Traverse(node.left);
            int right=Traverse(node.right);
            max=Math.max(max,left+right);
            return 1+Math.max(left,right);
    }
}
