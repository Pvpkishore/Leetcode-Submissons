class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
         
        int n = nums.size();
        unordered_map <int,int> mp;
        vector<int> ans;
        for(auto num:nums){
           mp[num]++;
        }


        for(auto num:mp){
            if(num.second>n/3){
               ans.push_back(num.first);
            }
        }

        return ans;
    }
};