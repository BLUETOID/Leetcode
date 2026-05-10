class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        vector<int>result = nums;
        reverse(nums.begin(),nums.end());
        result.insert(result.end(),nums.begin(),nums.end());

            return result;
    }
};
