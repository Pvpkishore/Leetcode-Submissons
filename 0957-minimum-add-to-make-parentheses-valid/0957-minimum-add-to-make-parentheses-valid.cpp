class Solution {
public:
    int minAddToMakeValid(string s) {
        int balance = 0;
        int needtoAdd = 0;

        for (auto ch : s) {
            if (ch == '(') {
                balance++;
            } 
            else if (ch == ')') {
                if (balance > 0) {
                     balance--; // it cancles out
                }
                else{
                    needtoAdd++; // no matching '(', so we need one
                }
            }
        }

       int ans = needtoAdd + balance;   // total additions needed = unmatched '(' + unmatched ')'

        return ans;
    }
};