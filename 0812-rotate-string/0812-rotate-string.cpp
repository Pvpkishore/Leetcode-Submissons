class Solution {
public:
    bool rotateString(string s, string goal) {

        // Step 1: Check if lengths match
        if (s.length() != goal.length()) return false;

        // Step 2: Concatenate s with itself
        string doubled = s + s;
    
        // Step 3: Check if goal is a substring of doubled
        return doubled.find(goal) != string::npos;

    }
};
