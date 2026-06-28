class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {

        vector<vector<int>> ans;

        if(root == NULL) {
            return ans;
        }

        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty()) {

            int size = q.size();

            vector<int> level;

            for(int i = 0; i < size; i++) {

                TreeNode* frontNode = q.front();
                q.pop();

                level.push_back(frontNode->val);

                if(frontNode->left != NULL) {
                    q.push(frontNode->left);
                }

                if(frontNode->right != NULL) {
                    q.push(frontNode->right);
                }
            }

            ans.push_back(level);
        }

        return ans;
    }
};
