class Solution {
public:

    //using recursion 
    //it gives time limit exceeded

    int solverec(vector<int>& nums,int i){

       if(i>=nums.size()){
         return 0;
       }
       int include = nums[i] + solverec(nums,i+2);
       int exclude = 0 + solverec(nums,i+1);
       int finalans = max(include,exclude);
       return finalans;
    }
   
     int SolveusingMem(vector<int>& dp,vector<int>& nums,int i){

       if(i>=nums.size()){
         return 0;
       }

      //step:-3 check if it is already it is existed in dp or not

       if(dp[i]!=-1){
        return dp[i];
       }

       //step2:-If ans coming with recursion store ans in dp and return
       int include = nums[i] + SolveusingMem(dp,nums,i+2);
       int exclude = 0 + SolveusingMem(dp,nums,i+1);
       dp[i] = max(include,exclude);
       return dp[i];
    }
   
    int rob(vector<int>& nums) {
    //return solverec(nums,0);
    //step 1:- Create dp array ans pass
      int n = nums.size();
      vector<int> dp(n+1,-1);
      int i=0;
      return SolveusingMem(dp,nums,i);
    }
};