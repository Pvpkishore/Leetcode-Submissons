class Solution {
public:
    // using recursion
    // it gives time limit exceeded

    int solverec(vector<int>& nums, int i) {

        if (i >= nums.size()) {
            return 0;
        }
        int include = nums[i] + solverec(nums, i + 2);
        int exclude = 0 + solverec(nums, i + 1);
        int finalans = max(include, exclude);
        return finalans;
    }

    int SolveusingMem(vector<int>& dp, vector<int>& nums, int i) {

        if (i >= nums.size()) {
            return 0;
        }

        // step:-3 check if it is already it is existed in dp or not
        if (dp[i] != -1) {
            return dp[i];
        }
        // step2:-If ans coming with recursion store ans in dp and return
        int include = nums[i] + SolveusingMem(dp, nums, i + 2);
        int exclude = 0 + SolveusingMem(dp, nums, i + 1);
        dp[i] = max(include, exclude);
        return dp[i];
    }

    int solveUsingTab(vector<int>& nums) {
        // step 1 create an dp array
        int n = nums.size();
        vector<int> dp(n + 2, 0);

        // step2 analyse base cases and update array
        dp[n] = 0;

        // checkparameter and reverse it run a loop

        for (int i = n - 1; i >= 0; i--) {
            // step2:-If ans coming with recursion store ans in dp and return
            int include = nums[i] + dp[i + 2];
            int exclude = 0 + dp[i + 1];
            dp[i] = max(include, exclude);
        }
        return dp[0];
    }

    // solve using space optimisation

    int solveusingSO(vector<int>& nums) {
       int n = nums.size();
       int next1 =0;
       int next2 =0;

        for (int i = n - 1; i >= 0; i--) {
            int include = nums[i] + next2;
            int exclude = 0 + next1;
            int curr = max(include, exclude);
            next2= next1;
            next1=curr;
        }
        return next1;
    }

    int rob(vector<int>& nums) {
        // return solverec(nums,0);
        // step 1:- Create dp array ans pass
        //    int n = nums.size();
        //    vector<int> dp(n+1,-1);
        //    int i=0;
        //    return SolveusingMem(dp,nums,i);
        //    return solveUsingTab(nums);
        return solveusingSO(nums);
    }
};