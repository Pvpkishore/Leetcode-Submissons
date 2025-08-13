class Solution {
public:
    bool wordPattern(string pattern, string s) {

        map<char,string> mapST;
        map<string,char> mapTS;

        vector<string> st;
        string word="";

        for(int i=0;i<s.size();i++){
           if (s[i] == ' ') {
                st.push_back(word);
                word = "";
            } else {
                word += s[i];
            }
        }

        st.push_back(word); // Add last word

        if(pattern.length()!=st.size()){
            return false;
        }

        for(int i=0;i<pattern.size();i++){
            char c1 = pattern[i];
            string c2 = st[i];

            if(mapST.find(c1)!=mapST.end()){
                if(mapST[c1]!=c2){
                    return false;
                }
            }
            else{
                mapST[c1]=c2;
            }


            if(mapTS.find(c2)!=mapTS.end()){
                if(mapTS[c2]!=c1){
                    return false;
                }
            }

            else{
                mapTS[c2]=c1;
            }


        }

        return true;

    }
};