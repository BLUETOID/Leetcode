
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        int maximum=0;
        int left=0;
        unordered_map<char,int>mp;
        for(int right = 0;right<n;right++){
            if(mp.count(s[right]) && mp[s[right]] >= left){
                left = mp[s[right]]+1;
            }
            mp[s[right]] = right;
            maximum = max(maximum,right-left+1);
        }

        return maximum;
    }
};