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
    bool isval(TreeNode *r,long mi,long ma){
        if (!r) return true;
        if (r->val<=mi || r->val>=ma) return false;
        return isval(r->left,mi,r->val) && isval(r->right,r->val,ma);
    }
    bool isValidBST(TreeNode* root) {
        return isval(root,LONG_MIN,LONG_MAX);
    }
};