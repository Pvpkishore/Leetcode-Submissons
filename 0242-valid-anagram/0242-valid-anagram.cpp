class Solution {
public:
    bool isAnagram(string s, string t) {
        // Step 1: Check lengths
        if (s.length() != t.length()) return false;

        // Step 2: Sort both strings
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        // Step 3: Compare sorted strings directly
        return s == t;
    }
};
