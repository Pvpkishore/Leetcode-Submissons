class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> temp(nums.size());
        int j=0;
       for(int i=0;i<nums.size();i++){
        if(nums[i]!=0){
            temp[j++]=nums[i];
        }
        for(int i=temp.size();i<nums.size();i++){
            temp[i]=0;
        }
    }
      nums=temp;
    }
};