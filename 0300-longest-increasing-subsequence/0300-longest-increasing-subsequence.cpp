class Solution {
public:


///USING RECURSION  it gives TLE
   int solve(vector<int>& arr,int lastindex,int i){

        //base case
        if(i>=arr.size()){
            return 0;
        }

        int curr = arr[i];
        int inc =0;

        //include
        if(lastindex ==-1 || curr>arr[lastindex]){
            inc = 1 + solve(arr,i,i+1);
        }

        //exclude
        int exc = 0 + solve(arr,lastindex,i+1);

        int finalans = max(inc,exc);
        return finalans;
   }

int solveMem(vector<int>& arr,int lastindex,int i,vector<vector<int>> &dp){

         //base case
        if(i>=arr.size()){
            return 0;
        }
      
        if(dp[lastindex+1][i]!=-1){
            return dp[lastindex+1][i];
        }
  
        int curr = arr[i];
        int inc =0;

        //include
        if(lastindex == -1 || curr>arr[lastindex]){
            inc = 1 + solveMem(arr,i,i+1,dp);
        }

        //exclude
        int exc = 0 + solveMem(arr,lastindex,i+1,dp);

        //step:-2 store in dp and return ans
        dp[lastindex+1][i] = max(inc,exc);
        
        return dp[lastindex+1][i];


}


    int lengthOfLIS(vector<int>& nums) {
        int lastindex =-1;
        int i=0;
        int n=nums.size();
        // return solve(nums,lastindex,i);
        vector<vector<int>> dp(n+2,vector<int> (n+1,-1));
         return solveMem(nums,lastindex,i,dp);

    }

};