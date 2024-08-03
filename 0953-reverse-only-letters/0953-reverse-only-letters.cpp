class Solution {
public:
    string reverseOnlyLetters(string s) {
         int l=0,h=s.length()-1;
        // for(int i=0;s[i]!='\0';i++){
        //     if((s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&&s[i]<='z')){
        //       char temp=s[i];
        //       s[i]=s[l-i-1];
        //       s[l-i-1]=temp;
        //     }
        // }
        while(l<h){
            if(isalpha(s[l])&&isalpha(s[h])){
                swap(s[l],s[h]);
                l++,h--;
            }
            else if(!isalpha(s[l])){
                l++;
            }
            else{
                h--;
            }
        }
        return s;
    }
};