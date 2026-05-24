
class Solution {
public:
    vector<int> limitOccurrences(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(int x:nums){
            mp[x]++;
        }
        vector<int>result;
        for(auto &[num,freq]:mp){
            int times = min(k,freq);
            while(times--){
                result.push_back(num);
            }
        }
