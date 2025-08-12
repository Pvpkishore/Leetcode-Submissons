class Solution {
public:
    bool checkString(string s) {
        int acount =0;
        int bcount =0;

        if(s.length()==1){
            return true;
        }
        for(int i=0;i<s.length();i++){
            if(s[i]=='a') acount++;
            if(s[i]=='b') bcount++;

            if(s[i]=='a' && bcount!=0){
                return false;
            }

            else if(i==s.length()-1 && acount==0){
                return true;
            }

            else if(s[i]=='b' && acount==0 && i==s.length()-1){
                return false;
            }
        }
       
        return true;
    }
};