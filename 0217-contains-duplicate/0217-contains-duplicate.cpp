class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

         unordered_map<int,int> mp;

        for(auto num:nums){
            mp[num]++;
        }
          
        for(auto num:mp){
            if(num.second>1){
                return true;
            }
        }

        return false;
    }
};