class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
       
         int n = nums.size();
        vector<int> NGE(n,-1);
        stack<int> st;

        for (int i = 2 * n - 1; i >= 0; i--) {

            while (!st.empty() && st.top() <= nums[i % n]) {
                st.pop();             //removes the element in stack which is less than the element in traverse
            }

            if (i < n) {
                NGE[i] = st.empty() ? -1 : st.top();    //stores greater value if present in stack otherwise -1 
            }

            st.push(nums[i % n]);
        }

        return NGE;
    }
};