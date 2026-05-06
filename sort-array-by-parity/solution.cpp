        int left=0;
        int right=nums.size()-1;

        while(left<right){
            if(nums[left]%2!=0 && nums[right]%2==0){
        }
                swap(nums[left],nums[right]);
            }
                left++;
                right--;
        return nums;
    }
            if(nums[right]%2!=0) right--;
            if(nums[left]%2==0) left++;
};
