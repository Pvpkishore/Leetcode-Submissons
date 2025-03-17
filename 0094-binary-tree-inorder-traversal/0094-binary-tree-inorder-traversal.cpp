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
    vector<int> inorderTraversal(TreeNode* root) {

        vector<int> ans;

        if(root==NULL){
            return ans;
        }
     
        vector<int> left = inorderTraversal(root->left);
        vector<int> right = inorderTraversal(root->right);

        for(int val:left ) ans.push_back(val);
        ans.push_back(root->val);
        for(int val:right ) ans.push_back(val);
        
        return ans;
    }
};