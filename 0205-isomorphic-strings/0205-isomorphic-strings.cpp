class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int hash[256] = {0}; // Array to map characters from string 's' to 't'
        bool ischarmapped[265] = {0}; // Array to track characters in 't' that are already mapped
        
        // First Pass: Map characters
        for (int i = 0; i < s.size(); i++) {
            if (hash[s[i]] == 0 && ischarmapped[t[i]] == 0) {
                hash[s[i]] = t[i];         // Map character s[i] to t[i]
                ischarmapped[t[i]] = true; // Mark t[i] as mapped
            }
        }
        
        // Second Pass: Validate the mapping
        for (int i = 0; i < s.size(); i++) {
            if (char(hash[s[i]]) != t[i]) { // If mapping doesn't match
                return false;
            }
        }
        
        return true; // Strings are isomorphic
    }
};
