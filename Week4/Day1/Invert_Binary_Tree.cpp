class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {

        // Base Case
        if(root == NULL) {
            return NULL;
        }

        // Swap Left and Right Child
        swap(root->left, root->right);

        // Invert Left Subtree
        invertTree(root->left);

        // Invert Right Subtree
        invertTree(root->right);

        return root;
    }
};
