/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> res;
        if (!root) return res;
        queue<TreeNode*> q;
        q.push(root);
        while (q.size()){
            vector<int>b;
            int n=q.size();
            for (int i=0;i<n;i++){
                TreeNode *o=q.front();
                q.pop();
                if (o->left) q.push(o->left);
                if (o->right) q.push(o->right);
                b.push_back(o->val);
            }
            res.push_back(b);
        }
        return res;
    }
};