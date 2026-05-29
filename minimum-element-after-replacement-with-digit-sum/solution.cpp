
class Solution {
public:
    int minElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans=INT_MAX;
        for(int i=0;i<nums.size();i++){
            int current =0;
            while(nums[i]>0){
                current += nums[i]%10;
                nums[i]=nums[i]/10;
            }
            ans = min(current,ans);
        }

        return ans;
    }
};