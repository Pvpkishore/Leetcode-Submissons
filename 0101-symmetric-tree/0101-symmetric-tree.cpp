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
    bool isSymmetric(TreeNode* root) {
        if(root==NULL){
            return false;
        }
        return ismirror(root->left,root->right);
    }

    bool ismirror(TreeNode* p,TreeNode* q) {
        
        if(p==NULL || q==NULL){
            return (p==q);
        }

        return (p->val==q->val) && ismirror(p->left,q->right) && ismirror(p->right,q->left);
    }

    
};