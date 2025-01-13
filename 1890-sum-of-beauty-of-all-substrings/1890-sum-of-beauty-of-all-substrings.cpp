class Solution {
public:
    int beautySum(string s) {
        int n = s.length();
    int totalBeauty = 0;

    // Iterate over all starting indices
    for (int i = 0; i < n; ++i) {
        unordered_map<char, int> freq; // Frequency map for the current substring

        // Iterate over all ending indices
        for (int j = i; j < n; ++j) {
            // Update frequency of the current character
            freq[s[j]]++;

            // Find the max and min frequencies in the current substring
            int maxFreq = INT_MIN, minFreq = INT_MAX;
            for (const auto& [ch, count] : freq) {
                maxFreq = max(maxFreq, count);
                minFreq = min(minFreq, count);
            }

            // Add the beauty of the current substring
            totalBeauty += (maxFreq - minFreq);
        }
    }

    return totalBeauty;
        
    }
};