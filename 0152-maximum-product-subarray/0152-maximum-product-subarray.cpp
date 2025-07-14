class Solution {
public:
    int maxProduct(vector<int>& nums) {

        if(nums.empty()) return 0;

        int maxprod = nums[0];
        int currmax = nums[0];
        int currmin = nums[0];

        for(int i=1;i<nums.size();i++){
            
            int temp = currmax;

            currmax = max({nums[i],nums[i]*currmax,nums[i]*currmin});
            currmin = min({nums[i],nums[i]*temp,nums[i]*currmin});
           
            maxprod = max (maxprod,currmax);
        }
    return maxprod;
    }
};



