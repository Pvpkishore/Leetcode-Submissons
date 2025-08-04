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
    TreeNode* deleteNode(TreeNode* root, int key) {
        if (!root) return nullptr;

        if (key < root->val) {
            root->left = deleteNode(root->left, key);
        } 

        else if (key > root->val) {
            root->right = deleteNode(root->right, key);
        }

        else {
            // Node found
            //if node has right child then we have have to delete right child only
            if (!root->left) {
                TreeNode* temp = root->right;
                delete root;
                return temp;
            }

            //if node has left child then we have have to delete left child only
            else if (!root->right) {
                TreeNode* temp = root->left;
                delete root;
                return temp;
            }

            // Node has two children
            TreeNode* minNode = findMin(root->right);
            root->val = minNode->val;
            root->right = deleteNode(root->right, minNode->val);
            
            //Since you can’t just remove the node (it has children), 
            // you need to replace it with another node in a way that maintains 
            // the Binary Search Tree (BST) properties.
            
        }
        
        return root;
    }

    TreeNode* findMin(TreeNode* node) {

        while (node && node->left) {
            node = node->left;
        }

        return node;
    }
};