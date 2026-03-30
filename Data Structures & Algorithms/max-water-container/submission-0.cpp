class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l = 0, r = heights.size() - 1;
        int maxWater = 0;
        int currWater;
        while(l < r){
            currWater = (r - l) * min(heights[l], heights[r]);
            maxWater = max(maxWater, currWater);
            if(heights[l] < heights[r]){
                l++;
            }else{
                r--;
            }
        }
        return maxWater;
    }
};
