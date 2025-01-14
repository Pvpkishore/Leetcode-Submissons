class Solution {
public:
    int findMin(vector<int>& nums) {

        int n = nums.size();

        int left = 0, right = n - 1;

        if (nums[left] < nums[right]) {
            return nums[left];
        }
        while (left < right) {
            int mid = (left + right) / 2;

            // Check if mid element is the minimum
            if (nums[mid] > nums[right]) {
                // Minimum is in the right half
                left = mid + 1;
            } else {
                // Minimum is in the left half including mid
                right = mid;
            }
        }
        return nums[left];
    }
};