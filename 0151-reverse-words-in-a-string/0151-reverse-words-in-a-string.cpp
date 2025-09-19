class Solution {
public:
    string reverseWords(string s) {
        // int left = 0;
        // int right = s.length() - 1;

        // // Trim leading spaces
        // while (left <= right && s[left] == ' ') left++;

        // // Trim trailing spaces
        // while (right >= left && s[right] == ' ') right--;

        // string temp = "";
        // string ans = "";

        // while (left <= right) {
        //     char ch = s[left];
        //     if (ch != ' ') {
        //         temp += ch;
        //     } else if (temp != "") { // Only add the word if it's not empty
        //         if (ans != "") {
        //             ans = temp + " " + ans;
        //         } else {
        //             ans = temp;
        //         }
        //         temp = "";
        //     }
        //     left++;
        // }

        // // Add the last word if it exists
        // if (temp != "") {
        //     if (ans != "") ans = temp + " " + ans;
        //     else ans = temp;
        // }

        // return ans;

        vector<string> words;

        string word;

        stringstream ss(s);

        while(ss>>word){
            words.push_back(word);
        }
       
        reverse(words.begin(),words.end());

        s.clear();
        
        for(int i=0;i<words.size();i++){
            s+=words[i];
            if(i < words.size()-1){
                s+=" ";
            }
        }
       return s;
    }
};
