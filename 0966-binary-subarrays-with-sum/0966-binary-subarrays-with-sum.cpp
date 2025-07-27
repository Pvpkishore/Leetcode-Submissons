class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
         // Map to store the frequency of prefix sums
        unordered_map<int,int> count;
        count[0] = 1;  // Base case: sum of 0 has occurred once
        int currSum = 0;   // Running prefix sum
        int result = 0;    // Total number of subarrays with sum equal to goal

        for(auto num:nums){
            currSum += num;  // Update the running prefix sum
        // Check if there is a previous prefix sum such that:
        // currSum - previousSum = goal → previousSum = currSum - goal
            if (count.find(currSum - goal) != count.end()) 
           {
             result += count[currSum - goal];  // Add the number of times it occurred
           }
        // Record the current prefix sum in the map
        count[currSum]++;
    }

    return result;  // Return the total count of valid subarrays

    }
};