class Solution {
public:
  vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
    // Step 1: Create a hash map to associate names with heights
    unordered_map<int, string> heightToName;
    int n = names.size();
    for (int i = 0; i < n; ++i) {
        heightToName[heights[i]] = names[i];
    }

    // Step 2: Sort heights in descending order
    sort(heights.begin(), heights.end(), greater<int>());

    // Step 3: Create a result vector by mapping sorted heights to names
    vector<string> result;
    for (int height : heights) {
        result.push_back(heightToName[height]);
    }

    return result;
}
};