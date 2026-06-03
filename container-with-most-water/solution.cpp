
class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int maxArea = 0;
        int left=0;
        int right = n -1;
        while(left<right){
            int hight = min(height[left],height[right]);
            int width = right - left;
            int area = hight * width;
            maxArea = max(maxArea,area);

            if(height[left]<height[right]) left++;
        }

        return maxArea;
    }
};