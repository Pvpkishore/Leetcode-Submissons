class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        unordered_map<int,int> mp;
        vector<int> res;

        for(auto num:nums){
            mp[num]++;
        }

        vector<pair<int,int>> freq;

         for(auto &val : mp){
            freq.push_back({val.second, val.first});
        }

        sort(freq.begin(),freq.end(),greater<pair<int,int>>());

          // Step 4: Take top k elements
        for(int i = 0; i < k; i++){
            res.push_back(freq[i].second);
        }

       return res;

    }
};