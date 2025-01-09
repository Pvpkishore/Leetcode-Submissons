class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int s = 0; 
        int e = n - 1;

        while (s <= e) {
            int mid = s + (e - s) / 2; // Prevent potential overflow
            if (nums[mid] == target) {
                return mid;
            } else if (nums[mid] < target) {
                s = mid + 1;
            } else {
                e = mid - 1;
            }
        }
        // If target is not found, `s` represents the correct insertion index
        return s;
    }
};
