
class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        int start = 0;
        int maxLength = 1;

        auto expand = [&](int l,int r){
            while(l>=0 && r<n && s[l]==s[r]){
                if(r-l+1 > maxLength){
                    maxLength = r-l+1;
                    start = l;
                }
                l--;
                r++;
            }
        };

        for(int i=0;i<n;i++){
            expand(i,i);
            expand(i,i+1);
        }

        return s.substr(start,maxLength);
    }
};