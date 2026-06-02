
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int sum1 = nums[0];
        int sum2 = nums[0];

        for (int i = 1; i < n; i++) {
            sum1 = max(nums[i], sum1 + nums[i]);
            sum2 = max(sum1, sum2);
        }

        return sum2;
    }
};
