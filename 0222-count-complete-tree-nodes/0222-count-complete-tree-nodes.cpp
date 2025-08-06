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
    int countNodes(TreeNode* root) {

        if(root==NULL){
            return 0;
        }

        int leftheight = getheight(root->left);
        int rightheight = getheight(root->right);

    //If both heights are equal → the tree is perfect:
    // Return (1 << h) - 1 (or pow(2, h) - 1).

        if(leftheight == rightheight){
            // Left subtree is perfect
            return (1<<leftheight) + countNodes(root->right);
        }
        else{
            // Right subtree is perfect
            return (1 << rightheight) + countNodes(root->left);
        }
    }

    int getheight(TreeNode* node){
        int h=0;
        while (node) {
            h++;
            node = node->left;
        }
        return h;
    }
};