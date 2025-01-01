class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0,r=height.size()-1;
        int maxWater = 0;

        while(l<r){
            int w = r-l;
            int h = min(height[l],height[r]);

            int currWater = w*h;

            maxWater = max(maxWater, currWater);

            if(height[l] < height[r]){
                l++;
            }else{
                r--;
            }

        }

        return maxWater;
    }
};