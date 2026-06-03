
        int right = n -1;
        while(left<right){
            int hight = min(height[left],height[right]);
            int width = right - left;
            int area = hight * width;
            maxArea = max(maxArea,area);

            if(height[left]<height[right]) left++;
            else{
                right--;
            }
        }

        return maxArea;
    }
};