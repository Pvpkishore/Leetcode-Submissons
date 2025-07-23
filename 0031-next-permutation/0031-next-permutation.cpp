class Solution {
public:
    void nextPermutation(vector<int>& nums) {
     int n = nums.size();
     int i = n-2;
      //first decreasing element from the end
       while(i>=0 && nums[i]>=nums[i+1]){ //stop when it decreases
        i--;  
       }
       
       //find the element just larger than the nums[i] on the right
       int j=n-1;
       if(i>=0)
       {
              while(nums[i]>=nums[j]){
              j--;
              }
              swap(nums[i],nums[j]);
       }
      reverse(nums.begin()+i+1,nums.end());
    }
};