class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {

        // Both Nodes are NULL
        if(p == NULL && q == NULL) {
            return true;
        }

        // One Node is NULL
        if(p == NULL || q == NULL) {
            return false;
        }

        // Values are Different
        if(p->val != q->val) {
            return false;
        }

        // Compare Left Subtrees
        bool left = isSameTree(p->left, q->left);

        // Compare Right Subtrees
        bool right = isSameTree(p->right, q->right);

        return left && right;
    }
};
