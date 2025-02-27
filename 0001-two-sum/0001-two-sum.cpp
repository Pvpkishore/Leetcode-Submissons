class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;

        int n = nums.size();

        for (int i = 0; i < n; i++) {
            int j = i + 1;
            while (j < nums.size()) {
            if (nums[i] + nums[j] == target) {
                    res.push_back(i);
                    res.push_back(j);
                }
                j=j+1;
            }
        }
        return res;
    }
};