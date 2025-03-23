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
    void storeInorder(TreeNode* root, vector<int>& inorder) {
        if (root == NULL) {
            return;
        }
        // inorder is LNR
        storeInorder(root->left, inorder);
        inorder.push_back(root->val);
        storeInorder(root->right, inorder);
    }

    bool sorted(vector<int> arr){
        int n=arr.size();
        for(int i=1;i<arr.size();i++){
             if(arr[i]<=arr[i-1]){
                return false;
             }
        }
        return true;
    }


    bool isValidBST(TreeNode* root) {
        vector<int> inorder;
        storeInorder(root,inorder);
       if(sorted(inorder)){
         return true;
       }
       else{
          return false;
       }
    }
};

