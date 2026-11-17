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
    void ma(TreeNode* r,int &p,int &mi){
        if (!r) return;
        ma(r->left,p,mi);
        if (p!=-1) mi=min(mi,abs(r->val-p));
        p=r->val;
        ma(r->right,p,mi);
    }
    int minDiffInBST(TreeNode* root) {
        int prev=-1;
        int mi=INT_MAX;
        ma(root,prev,mi);
        return mi;
    }
};