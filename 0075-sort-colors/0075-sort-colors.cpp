class Solution {
public:
    void sortColors(vector<int>& arr) {
    //  int cnt0=0,cnt1=0,cnt2=0;  
    //     for(int i=0;i<arr.size();i++){
    //         if(arr[i]==0){
    //            cnt0++;
    //         }
    //         if(arr[i]==1){
    //            cnt1++;
    //         }
    //         if(arr[i]==2){
    //            cnt2++;
    //         }
    //     }
    //    for(int i=0;i<cnt0;i++) arr[i]=0;
    //    for(int i=cnt0;i<cnt0+cnt1;i++) arr[i]=1;
    //    for(int i=cnt0+cnt1;i<arr.size();i++) arr[i]=2;
   
    //  map<int,int> mp;

    //  for(auto it : arr){
    //      mp[it]++;
    //  }

    //  arr.erase(arr.begin(),arr.end());

    //  for(auto it : mp){

    //     if(it.first==0){
    //       arr.push_back(it.first);
    //     }
    //     else if(it.first==1){
    //          arr.push_back(it.first);
    //     }
    //     else{
    //         arr.push_back(it.first);
    //     }

    //  }
    multiset<int> st;
    for(auto val :arr){
        st.insert(val);
    }
     vector<int> result(st.begin(),st.end());
     arr = result;
    }
};