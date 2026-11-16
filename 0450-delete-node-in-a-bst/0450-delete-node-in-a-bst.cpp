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
    TreeNode* retn(TreeNode *r){
        if (!r->left) return r->right;
        if (!r->right) return r->left;
        TreeNode *y=r->right;
        TreeNode *o=r->left;
        while (o->right) o=o->right;
        o->right=y;
        return r->left;
    }
    void del(TreeNode* r,int k){
        if (!r) return;
        if (k<r->val){
            if (r->left && k==r->left->val){
                r->left=retn(r->left);
                return;
            }
            else del(r->left,k);
        }
        else {
            if (r->right && k==r->right->val){
                r->right=retn(r->right);
                return;
            }
            del(r->right,k);
        }

    }
    TreeNode* deleteNode(TreeNode* root, int key) {
        if (!root) return NULL;
        if (key==root->val) return retn(root);
        del(root,key);
        return root;
        
    }
};