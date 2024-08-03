class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2){
        vector<int> ans;
        unordered_map<int,bool> map;
        for(auto e:nums1){
            map[e]=true;
        }
        for(auto e:nums2){
            if(map[e]){
                ans.push_back(e);
                map[e]=false;
            }
        }
        return ans;
        }
};