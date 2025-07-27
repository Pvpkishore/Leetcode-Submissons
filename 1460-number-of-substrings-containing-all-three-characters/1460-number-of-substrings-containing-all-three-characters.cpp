class Solution {
public:
    int numberOfSubstrings(string s) {
        int n = s.size();
        int count[3] = {0, 0, 0}; // to store frequency of 'a', 'b', 'c'
        int left = 0, right = 0, result = 0;

        for (int right = 0; right < n; right++) {

            count[s[right] - 'a']++; // increment count of current character

            // shrink the window as long as it has all 3 characters
            while (count[0] > 0 && count[1] > 0 && count[2] > 0) {
                result += n - right;
                count[s[left] - 'a']--;
                left++;
            }
        }
        return result;
    }
};