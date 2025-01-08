class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
         
         int n = nums.size();
         int s=0;
         int e=n-1;
         int mid=s+(e-s)/2;
while(s<=e){
     //case-1 :- single element
         if(s==e){
            return nums[s];
         }

      int currval=nums[mid];
      
      // mid-1 index on left side
      int leftval=-1;

      if(mid-1>=0){
        leftval=nums[mid-1];
      }
      
      // mid+1 index on right side
      int rightval=-1;
      if(mid+1<n){
        rightval=nums[mid+1];
      }
      //case:-2 non duplicates
      if(currval!=leftval && currval!=rightval){
        return currval;
      }
    //   case:-3 if duplicate is on leftside
     if(currval==leftval && currval!=rightval){

        int pairstartingindex = mid-1;

        if(pairstartingindex & 1){
            //if index is odd
            //standing on right part
            //move to left
            e=mid-1;
        }
        else{
            //move to right
             s=mid+1;
        }
     }
      //   case:-4 if duplicate is on rightside
     else if( currval==rightval && currval!=leftval){

        int pairstartingindex = mid;

        if(pairstartingindex & 1){
            //if index is odd
            //standing on right part
            //move to left
            e=mid-1;
        }
        else{
            //move to right
             s=mid+1;
        }
     }
     mid=s+(e-s)/2;
}
 return -1;
    }
};