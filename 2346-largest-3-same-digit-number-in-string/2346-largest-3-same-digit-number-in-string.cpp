class Solution {
public:
    string largestGoodInteger(string nums) {
       string ans = "";
       
       for(int i=0;i+2<nums.size();i++){
          if(nums[i]==nums[i+1] && nums[i+1]==nums[i+2]){  //upto three digits equal
             string temp = nums.substr(i,3);
             ans = max(ans,temp);
          }
       }
       
     return ans;
    }
};