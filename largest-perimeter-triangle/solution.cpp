    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int right = nums.size();
        int left = 0;
        while(right>=3){
            int valid = nums[right-2]+nums[right-3];
            if(valid > nums[right-1]){
                return nums[right-1]+nums[right-2]+nums[right-3];
            }
            right--;
        }
       
            return 0;
    }
};
