class Solution {
public:
    // int singleNumber(vector<int>& nums) {
        //  int ans=0;
        // for(int i=0;i<nums.size();i++){
        //      ans=ans^i;
        //      ans=ans^nums[i];
        // }
        // return ans;
    // }
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> freq;
        for (int n : nums){
            freq[n]++;
        }
        for (int n : nums){
            if (freq[n]==1){
                return n;
            } 
        }
        return -1;
    }
};