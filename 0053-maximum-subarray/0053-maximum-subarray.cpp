class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxsum = nums[0];
        int currentsum = nums[0];

        for(int i=1;i<nums.size();i++){
            currentsum+=nums[i];
            currentsum = max(nums[i],currentsum);
            maxsum = max(maxsum,currentsum);
        }

        return maxsum;
    }
};