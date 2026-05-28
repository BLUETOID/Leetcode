
class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int first = nums[0]*nums[1];
        int second = nums[n-1]*nums[n-2];

        return second - first;
    }
};