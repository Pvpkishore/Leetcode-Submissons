class Solution {
public:
    string removeOuterParentheses(string s) {

        string result;

        int count =0;

        for(auto ch:s){

            if(ch=='('){
                if(count > 0)  result+=ch;         //skip outermost
                count++;
            }

            else{
                 count--;
                 if(count > 0) result+=ch;        //skip outermost
            }
            
        }
        return result;
    }
};