class Solution {
public:
    void inorder(TreeNode* root, vector<int>& ans) {

        // Base Case
        if(root == NULL) {
            return;
        }

        // Left Subtree
        inorder(root->left, ans);

        // Current Node
        ans.push_back(root->val);

        // Right Subtree
        inorder(root->right, ans);
    }

    vector<int> inorderTraversal(TreeNode* root) {

        vector<int> ans;

        inorder(root, ans);

        return ans;
    }
};
