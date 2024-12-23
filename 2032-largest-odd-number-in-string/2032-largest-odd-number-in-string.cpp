class Solution {
public:
    string largestOddNumber(string num) {
        // Traverse the string from the end to find the last odd digit
        for (int i = num.length() - 1; i >= 0; i--) {
            if ((num[i] - '0') % 2 != 0) {
                // Return the substring from the beginning to the last odd digit
                return num.substr(0, i + 1);
            }
        }
        // If no odd digit is found, return an empty string
        return "";
    }
};
