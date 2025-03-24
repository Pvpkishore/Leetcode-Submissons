class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        // Default result if the target is not found
        vector<int> result{-1, -1};

        // Find the first occurrence of the target
        int left = 0, right = n - 1;

        while (left <= right) {
            int mid = (left + right) / 2;
            if (nums[mid] < target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        // Check if the target exists
        if (left >= n || nums[left] != target) return result;

        // Store the first occurrence
        result[0] = left;

        // Find the last occurrence of the target
        right = n - 1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] > target) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        // Store the last occurrence
        result[1] = right;
        
        return result;
    }
};
