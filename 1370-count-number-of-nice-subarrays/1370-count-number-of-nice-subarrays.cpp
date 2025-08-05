class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {

        unordered_map<int,int> prefix;
        prefix[0]=1; // Base case: 0 odd numbers seen initially
        int oddcount =0,result =0;


        for(auto num:nums){

            if(num % 2!=0) oddcount++;

            // If oddCount - k seen before, then we found valid subarrays
            if(prefix.find(oddcount-k)!=prefix.end()){

                result+=prefix[oddcount-k];

            }

            // Update the prefix map
            prefix[oddcount]++;

        }
        
        return result;

    }
};