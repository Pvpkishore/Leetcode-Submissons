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

    int Getheight(TreeNode* root){
        if(root==NULL){
            return 0;
        }
        int leftsubtreeheight =  Getheight(root->left);
        int rightsubtreeheight =  Getheight(root->right);
        int maxheight = max(leftsubtreeheight,rightsubtreeheight);
        int totalheight = maxheight + 1;
        return totalheight;

    }

    bool isBalanced(TreeNode* root) {
        if(root ==NULL){
            return true;
        }
        //checking in current Node
        //one case we have to solve remaining will be done by the recursion
        int leftheight = Getheight(root->left);
        int Rightheight = Getheight(root->right);
        int absdiff = abs(leftheight - Rightheight);
        bool status = (absdiff<=1);

        //Remaining recursion will do
         bool leftans = isBalanced(root->left);
         bool rightans = isBalanced(root->right);

         //I can say whether tree is balanced or not,when
         //current Node is balanced
         //left subtree is balanced
         //Right subtree is balanced

         if(status && leftans && rightans)
         {
            return true;
         }
         else{
            return false;
         }

    }
};