class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        // Calculate the sum of the first 'k' elements
        double maxSum = 0, windowSum = 0;

        for (int i = 0; i < k; i++) {
            windowSum += nums[i];
        }
        maxSum = windowSum;

        for (int i = k; i < nums.size(); i++) {

            windowSum = windowSum + nums[i] - nums[i-k];

            maxSum = max(maxSum,windowSum);
        }
        return maxSum/k;
    }
};