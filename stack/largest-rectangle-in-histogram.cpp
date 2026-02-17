// LeetCode 84 - Largest Rectangle in Histogram
// https://leetcode.com/problems/largest-rectangle-in-histogram/
// Monotonic Stack

class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {

        int n = heights.size();
        vector<int> next(n, n);
        stack<pair<int,int>> st;

        // Next smaller element
        for (int i = n - 1; i >= 0; i--) {

            while (!st.empty() && st.top().first >= heights[i]) {
                st.pop();
            }

            if (!st.empty()) {
                next[i] = st.top().second;
            }

            st.push({heights[i], i});
        }

        while (!st.empty()) st.pop();

        vector<int> prev(n, -1);

        // Previous smaller element
        for (int i = 0; i < n; i++) {

            while (!st.empty() && st.top().first >= heights[i]) {
                st.pop();
            }

            if (!st.empty()) {
                prev[i] = st.top().second;
            }

            st.push({heights[i], i});
        }

        int res = 0;

        for (int i = 0; i < n; i++) {
            int width = next[i] - prev[i] - 1;
            int area = width * heights[i];
            res = max(res, area);
        }

        return res;
    }
};
