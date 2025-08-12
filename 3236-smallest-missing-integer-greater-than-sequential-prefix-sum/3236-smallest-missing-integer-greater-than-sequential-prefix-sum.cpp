class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int ans = nums[0];

        unordered_set<int> vis(nums.begin(),nums.end());

        for(int i=1 ;i<nums.size() && nums[i]==nums[i-1]+1;i++){
            ans+=nums[i];
        }

        while(vis.count(ans)) ++ans;

        return ans;
    }
};