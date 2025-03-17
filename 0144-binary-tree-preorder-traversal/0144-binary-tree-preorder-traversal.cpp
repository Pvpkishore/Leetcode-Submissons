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
    vector<int> preorderTraversal(TreeNode* root) {

        vector<int> ans;

       if(root==NULL){
            return ans;
        }
        ans.push_back(root->val);

        vector<int> left = preorderTraversal(root->left);   // Left subtree
        vector<int> right = preorderTraversal(root->right); // Right subtree
        
        for (int val : left) ans.push_back(val);
        for (int val : right) ans.push_back(val);

        return ans;
    }
};