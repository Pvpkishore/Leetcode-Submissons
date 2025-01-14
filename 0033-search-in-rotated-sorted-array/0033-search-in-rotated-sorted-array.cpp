class Solution {
public:
    int search(vector<int>& nums, int target) {

        int n = nums.size();
        int left = 0, right = n - 1;

        if (n < 0) {
            return -1;
        }

        while (left <= right) {

            int mid = (left + right) / 2;

            // check if mid element is target
            if (nums[mid] == target) {
                return mid;
            }

            // check which part is sorted
            if (nums[left] <= nums[mid]) { // if left part is sorted

                if (nums[left] <= target && target < nums[mid]) {
                    // Target is in the left sorted half
                    right = mid - 1;
                } else {
                    // Target is in the right sorted half
                    left = mid + 1;
                }

            } else { // if right part is sorted
                if (nums[mid] < target && target <= nums[right]) {
                    // Target is in the right sorted half
                    left = mid + 1;
                }
                else{
                    right =mid-1;
                     // Target is in the left half
                }
            }
        }
    
    // Target not found
        return -1;

    }
};