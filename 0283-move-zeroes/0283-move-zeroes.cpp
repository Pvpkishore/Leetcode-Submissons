class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j = 0; // Index to place the next non-zero element
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                swap(nums[j++], nums[i]); // Swap non-zero element to the front
            }
        }
    }
};