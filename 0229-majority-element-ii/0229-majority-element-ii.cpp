class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
         
        // int n = nums.size();
        // unordered_map <int,int> mp;
        // vector<int> ans;
        // for(auto num:nums){
        //    mp[num]++;
        // }


        // for(auto num:mp){
        //     if(num.second>n/3){
        //        ans.push_back(num.first);
        //     }
        // }

        // return ans;
 // Boyer-Moore Majority Vote Algorithm  space complexity is O(1)
      int count1 = 0,count2=0;
      int candidate1 = 0 ,candidate2=0;

    for(auto num:nums){
       if(num==candidate1){
           count1++;
        }
        else if(num==candidate2){
            count2++;
        }
        else if(count1==0){
            candidate1 = num;
            count1=1;
        }
        else if(count2==0){
        candidate2 = num;
        count2=1;
        }
        else{
        count1--;
        count2--;
       }
    }
    //second pass for verfication

    count1=0;
    count2=0;

    for(auto num:nums){
        if(num==candidate1) count1++;
        if(num==candidate2) count2++;
    }

    vector<int> result;
    int n=nums.size();

    if(count1>n/3) result.push_back(candidate1);
    if(count2>n/3) result.push_back(candidate2);

    return result;

    }
};