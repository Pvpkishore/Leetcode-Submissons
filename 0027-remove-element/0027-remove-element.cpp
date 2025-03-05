class Solution {
public:
    int removeElement(vector<int>& arr, int val) {

        int actuallength = arr.size();
        int k=0;

        for(int i=0;i<actuallength;i++){

           if(arr[i]!=val){
               arr[k] = arr[i]; // Overwrite elements in place
               k++;
           }
        }
        
        return k;
    }
};