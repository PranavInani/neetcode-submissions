class Solution {
public:
    int maxArea(vector<int>& heights) {
        int ma = 0, curr = 0, left = 0, right = heights.size() - 1;

        while(left < right){
            int width = right - left;
            int height = min(heights[left], heights[right]);
            curr = width*height;
            ma = max(curr, ma);

            if(heights[left] < heights[right]) left++;
            else right--;
        } 
        return ma;
    }
};
