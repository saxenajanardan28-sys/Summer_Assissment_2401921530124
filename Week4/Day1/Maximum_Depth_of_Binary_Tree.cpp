class Solution {
public:
    int maxDepth(TreeNode* root) {

        // Base Case
        if(root == NULL) {
            return 0;
        }

        // Left Subtree
        int leftDepth = maxDepth(root->left);

        // Right Subtree
        int rightDepth = maxDepth(root->right);

        // Current Node Depth
        return 1 + max(leftDepth, rightDepth);
    }
};
