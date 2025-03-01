class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> romanMap = {
            {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50},
            {'C', 100}, {'D', 500}, {'M', 1000}
        };
        int result = 0;

        for(int i=0;i < s.size();i++){

         if (i < s.size() - 1 && romanMap[s[i]] < romanMap[s[i + 1]]) {
                // Apply subtraction rule
                result -= romanMap[s[i]];
            }
            else {
                // Add value normally
                result += romanMap[s[i]];
            }
            
      }
       return result;
    }
};