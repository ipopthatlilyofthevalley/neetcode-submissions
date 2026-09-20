class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l {};
        int r { static_cast<int>(heights.size() - 1) };
        
        int maxarea {};
        while (l < r) {
            int area { (r - l) * min(heights[l], heights[r]) };
            maxarea = max(maxarea, area);
            if (heights[l] < heights[r]) {
                l++;
            } else {
                r--;
            }
        }
        return maxarea;
    }
};
