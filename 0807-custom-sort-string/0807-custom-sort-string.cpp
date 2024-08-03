class Solution {
public:
    string customSortString(string order, string s) {
        // string temp=order;
        // sort(order.begin(),order.end());
        // int l=s.length();
        // int find=s.find(order);
        // if(1>=1)
        // s.erase(find,l-1);
        // else
        // s.erase(0);
        // string ans=s.insert(find,temp);
        unordered_map<char,int> memo;
        string ans="";

        for(auto current:s){
            memo[current]++;
        }
  for(auto current:order){
      int freq=memo[current];
      while(freq>0 && freq--){
            ans+=current;
            memo[current]=0;
      }
  }
    for(auto current:memo){
        int freq=current.second;
        while(freq>0 && freq--){
        ans+=current.first;
        }
    }
     
     return ans;

    }
};