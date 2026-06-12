
class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.length();
        int maxLength = 0 ;
        int start = 0;

        auto expand = [&](int l,int r){
            while(l>=0 && r < n && s[l]==s[r]){
                if(r-l+1 > maxLength){
                    maxLength = r-l+1;
                    start = l;
                }
                l--;
                r++;
            }
        };
