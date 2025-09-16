class Solution {
public:
    void rotate(vector<int>& arr, int k) {

        vector<int> temp(arr.size());

        for (int i = 0; i < arr.size(); i++) {

            temp[(i + k) % arr.size()] = arr[i];
            
        }

     // Left rotate by 'd' positions
    //  std::rotate(arr.begin(), arr.begin() + d, arr.end());


    // Right rotate by 'd' positions
    // std::rotate(arr.rbegin(), arr.rbegin() + d, arr.rend());
        arr = temp;
    }
};