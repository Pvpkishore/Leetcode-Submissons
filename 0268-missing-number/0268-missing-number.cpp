class Solution {
public:
    int missingNumber(vector<int>& nums) {
    //      int i;
    // sort(nums.begin(),nums.end());
    //     for( i=0;i<nums.size();i++){
    //         if(i!=nums[i]){
    //             break;
    //         }
    //     }
    //     return i;
    //  }
    int ans=nums.size();
    for(int i=0;i<nums.size();i++){
        ans=ans^nums[i];
        ans=ans^i;
        
    }

    return ans;
    }
};