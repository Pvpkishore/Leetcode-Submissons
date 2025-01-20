class Solution {
public:
    bool isValid(string s) {

        stack<char> st;

        for(int i=0;i<s.size();i++){
            char ch = s[i];
        //Brackets may be open/closed

        //if open
        if(ch=='(' || ch=='{' ||ch=='['){
            st.push(ch);
        }  
        else{

            if(ch==')' && !st.empty() && st.top()=='('){
                 st.pop();  //bracket match -> cancel out
            }
            else if(ch=='}' && !st.empty() && st.top()=='{'){
                st.pop();
            }
            else if(ch==']' && !st.empty() && st.top()=='['){
                st.pop();
             }
             else{
                return false; //bracket not match
             }
        }

        }
   
   if(st.size()==0){
    return true;
   }
   else{
    return false;
   }
        
    }
};