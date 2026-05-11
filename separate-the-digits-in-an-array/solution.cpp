class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> result;
        for(int i=0;i<nums.size();i++){
            string current = to_string(nums[i]);
            for (int j = 0; j < current.length(); j++) {
                result.push_back(current[j] - '0'); 
            }
        }

        return result;
    }
};
