class Solution {
public:
    int maxDepth(string s) {
        
        int currentdepth =0;
        int maxDepth = 0;

        for(char c : s){
              if(c=='('){
                currentdepth++;
                maxDepth=max(maxDepth,currentdepth);
              }
              else if(c==')'){
                currentdepth--;
              }
        }
        return maxDepth;
    }
};