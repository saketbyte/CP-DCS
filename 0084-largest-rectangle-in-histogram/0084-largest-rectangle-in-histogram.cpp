class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> wall;
        int area = 0;
        int n = heights.size();

        for (int i = 0; i < n; ++i) {
            while (!wall.empty() && heights[wall.top()] > heights[i]) {
                int height = heights[wall.top()];
                wall.pop();
                int width = wall.empty() ? i : i - wall.top() - 1;
                area = max(area, height * width);
            }
            wall.push(i);
        }

        while (!wall.empty()) {
            int height = heights[wall.top()];
            wall.pop();
            int width = wall.empty() ? n : n - wall.top() - 1;
            area = max(area, height * width);
        }

        return area;
        
    }
};