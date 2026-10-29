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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if (!root) return ans;
        queue<TreeNode*> q;
        q.push(root);
        bool fl=true;
        while (q.size()){
            int n=q.size();
            vector<int> b(n);
            for (int i=0;i<n;i++){
                int index=fl?i:n-i-1;
                TreeNode *o=q.front();
                q.pop();
                if (o->left) q.push(o->left);
                if (o->right) q.push(o->right);
                b[index]=o->val;
            }
            ans.push_back(b);
            fl=!fl;
        }
        return ans;
    }
};