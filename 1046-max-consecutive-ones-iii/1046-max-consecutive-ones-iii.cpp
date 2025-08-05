class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left =0,maxlen =0,Zerocount=0;

        for(int right=0;right<nums.size();right++){

            if(nums[right]==0){
               Zerocount++;
            }

            while(Zerocount > k){
                if(nums[left]==0){
                    Zerocount--;
                }
                left++;
            }
            

            maxlen = max(maxlen,right-left+1);
        }
        return maxlen;
    }
};