class Solution {
public:
    string longestCommonPrefix(vector<string>& v) {
        string ans = "";  // Initialize the result string to store the common prefix

        sort(v.begin(), v.end());  // Sort the array of strings lexicographically
        
        int n = v.size();  // Get the size of the vector

        // Get the first and the last strings in the sorted vector
        string first = v[0];
        string last = v[n - 1];

        // Compare characters of the first and last strings up to the length of the shorter one
        for (int i = 0; i < min(first.size(), last.size()); i++) {
            if (first[i] != last[i]) {  // If characters differ, return the result
                return ans;
            }
            ans += first[i];  // Add the common character to the result
        }

        return ans;  // Return the complete common prefix
    }
};
