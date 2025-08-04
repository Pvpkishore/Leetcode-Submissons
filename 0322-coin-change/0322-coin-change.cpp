class Solution {
public:
///Using recursion TLE will be coming
    int solve(vector<int>& coins, int amount) {

        // basecase
        if (amount == 0) {
            return 0;
        }

        int mincoinsans = INT_MAX;

        for (int i = 0; i < coins.size(); i++) {

            int coin = coins[i];

            if (coin <= amount) {
                int recursionans = solve(coins, amount - coin);

                if (recursionans != INT_MAX) {
                    int coinsused = 1 + recursionans;
                    mincoinsans = min(mincoinsans, coinsused);
                }

            }
        }

        return mincoinsans;
    }

     //Using Memoisation method top to bottom
     int solveMem(vector<int>& coins, int amount,vector<int> &dp) {

        // basecase
        if (amount == 0) {
            return 0;
        }

        if(dp[amount]!=-1){
            return dp[amount];
        }

        int mincoinsans = INT_MAX;

        for (int i = 0; i < coins.size(); i++) {

            int coin = coins[i];

            if (coin <= amount) {
                int recursionans = solveMem(coins, amount - coin,dp);

                if (recursionans != INT_MAX) {
                    int coinsused = 1 + recursionans;
                    mincoinsans = min(mincoinsans, coinsused);
                }

            }
        }

        dp[amount] = mincoinsans;
        return dp[amount];
    }

    //using tabulation bootom to up
    int solveUsingTab(vector<int>& coins, int amount){
        // step1 :- craete 1 d dp array
        vector<int> dp(amount+1,-1);

        //step:-2 analyse base case
        dp[0] =0;

        for(int amt =1;amt<=amount;amt++){
          //copy paste
            int mincoinsans = INT_MAX;

        for (int i = 0; i < coins.size(); i++) {

            int coin = coins[i];

            if (coin <= amt) {
                int recursionans = dp[amt - coin];

                if (recursionans != INT_MAX) {
                    int coinsused = 1 + recursionans;
                    mincoinsans = min(mincoinsans, coinsused);
                }

            }
        }
          dp[amt] = mincoinsans;
        }

        return dp[amount];
    }

    int coinChange(vector<int>& coins, int amount) {

        // int ans = solve(coins, amount);

        //step:-1 create 1 d dp array
        int n = coins.size();
        // vector<int> dp(amount+1,-1);
        // int ans = solveMem(coins, amount,dp);
        int ans = solveUsingTab(coins, amount);

        if (ans == INT_MAX) {
            return -1;
        }

        return ans;
    }
};