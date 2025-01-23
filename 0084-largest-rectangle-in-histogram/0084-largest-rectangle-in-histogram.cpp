class Solution {
public:
    // int Nextsmaller(vector<int>& heights, vector<int>& Nextans) {

    //     stack<int> st;
    //     st.push(-1);
    //     int n = heights.size();

    //     for (int i = n - 1; i >= 0; i--) {

    //         int element = heights[i];
    //         while (st.top() != -1 && heights[st.top()] >= element) {

    //             st.pop();
    //         }
    //         if(st.top()!= -1) Nextans.push_back(st.top());
    //         st.push(i);
    //     }
    // }

    // int Prevsmaller(vector<int>& heights, vector<int>& Prevans) {

    //     stack<int> st;
    //     st.push(-1);
    //     int n = heights.size();

    //     for (int i = 0; i < n; i++) {

    //         int element = heights[i];

    //         while (st.top() != -1 && heights[st.top()] >= element) {

    //             st.pop();
    //         }
    //         if(st.top()!=-1) Prevans.push_back(st.top());
    //         st.push(i);
    //     }
    // }

    // int largestRectangleArea(vector<int>& heights) {

    //     vector<int> Nextans;
    //     vector<int> Prevans;
    //     Nextsmaller(heights, Nextans);
    //     reverse(Nextans.begin(), Nextans.begin());
    //     Prevsmaller(heights, Prevans);

    //     int maxarea = INT_MIN;

    //     for (int i = 0; i < Nextans.size(); i++) {

    //         int width = Nextans[i] - Prevans[i] - 1;
    //         int height = heights[i];
    //         int Area = width * height;
    //         maxarea = max(maxarea, Area);
    //     }
    //    return maxarea;
    // }
    // Function to calculate the next smaller elements for each index
    void Nextsmaller(vector<int>& heights, vector<int>& Nextans) {
        stack<int> st;
        st.push(-1);
        int n = heights.size();

        for (int i = n - 1; i >= 0; i--) {
            int element =heights[i];
            while (st.top() != -1 && heights[st.top()] >= element) {
                st.pop();
            }
                Nextans.push_back(st.top());
            st.push(i);
        }
    }

    // Function to calculate the previous smaller elements for each index
    void Prevsmaller(vector<int>& heights, vector<int>& Prevans) {
        stack<int> st;
        st.push(-1);
        int n = heights.size();

        for (int i = 0; i < n; i++) {
             int element =heights[i];
            while (st.top() != -1 && heights[st.top()] >= element) {
                st.pop();
            }
            Prevans.push_back(st.top());
            st.push(i);
        }
    }

    // Main function to calculate the largest rectangle area
    int largestRectangleArea(vector<int>& heights) {
        vector<int> Nextans; // Stores indices of the next smaller element
        vector<int> Prevans; // Stores indices of the previous smaller element

        Nextsmaller(heights, Nextans); // Compute next smaller
        reverse(Nextans.begin(),Nextans.end());

        for(int i=0;i<Nextans.size();i++){
            if(Nextans[i]==-1){
                Nextans[i]=Nextans.size();
            }
        }
        Prevsmaller(heights, Prevans); // Compute previous smaller

        int maxarea = 0; // Initialize max area

        for (int i = 0; i < Nextans.size(); i++) {
            int width = Nextans[i] - Prevans[i] - 1; // Width of the rectangle
            int height = heights[i];                // Height of the rectangle
            int Area = width * height;              // Area of the rectangle
            maxarea = max(maxarea, Area);           // Update max area
        }

        return maxarea;
    }
};