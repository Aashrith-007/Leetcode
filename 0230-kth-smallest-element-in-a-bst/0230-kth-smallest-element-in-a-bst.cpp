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
    void ino(TreeNode *r,int &k,int &c){
        if (!r) return;
        ino(r->left,k,c);
         k--;
         if (k<0) return;
        if (k==0){
            c=r->val;
            return;
        }
        ino(r->right,k,c);
    }
    int kthSmallest(TreeNode* root, int k) {
        int c=root->val;
        ino(root,k,c);
        return c;
    }
};