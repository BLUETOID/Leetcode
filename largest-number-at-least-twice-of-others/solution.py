class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int maxIndex = max_element(nums.begin(),nums.end())-nums.begin();
        sort(nums.begin(),nums.end());
        int maximum = *max_element(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]>maximum/2) return -1;
        }

        return maxIndex;
    }
};
