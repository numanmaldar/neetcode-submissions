class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left = 0;
        int right = heights.size()-1;
        int maxA = INT_MIN;
        while(left<right){
            int area = min(heights[left], heights[right]) * (right-left);
            maxA = max(maxA, area);

            if(heights[left] <= heights[right])left++;
            else right--;
        }
        return maxA;
    }
};
