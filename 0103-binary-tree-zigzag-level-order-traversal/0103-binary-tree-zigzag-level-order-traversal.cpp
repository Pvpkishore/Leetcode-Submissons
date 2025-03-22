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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        //   vector<vector<int>> result; // Stores level-wise nodes

        // if (root == NULL)
        //     return result; // If tree is empty, return empty vector

        // queue<TreeNode*> q;
        // q.push(root);
        // bool leftToRight = true; // Track order of insertion

        // while (!q.empty()) {
        //     int levelSize = q.size(); // Number of nodes at the current level
        //     deque<int> currentLevel; // Stores values at the current level

        //     for (int i = 0; i < levelSize; i++) {
        //         TreeNode* front = q.front();
        //         q.pop();

        //         // Insert values based on direction
        //         if (leftToRight)
        //             currentLevel.push_back(front->val);
        //         else
        //             currentLevel.push_front(front->val);

        //         // Push child nodes to queue
        //         if (front->left != NULL)
        //             q.push(front->left);
        //         if (front->right != NULL)
        //             q.push(front->right);
        //     }

        //     result.push_back({currentLevel.begin(), currentLevel.end()}); // Store current level
        //     leftToRight = !leftToRight; // Toggle direction for next level
        // }

        // return result;
        queue<TreeNode*> q;

        vector<vector<int>> ans;

        if(root==NULL) return ans;
        q.push(root);

        while(!q.empty()){

            int size=q.size();
            vector<int> currentlevel;

            for(int i=0;i<size;i++){

                TreeNode* temp=q.front();
                currentlevel.push_back(temp->val);
                q.pop();

                if(temp->left!=NULL) q.push(temp->left);
                if(temp->right!=NULL) q.push(temp->right);
            }
            ans.push_back(currentlevel);
        }

        for(int i=0;i<ans.size();i++){
            if(i%2!=0){
                reverse(ans[i].begin(),ans[i].end());
            }
        }
        return ans;
    }
};