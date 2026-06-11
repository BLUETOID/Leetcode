
class Solution {
public:
    string reverseWords(string s) {
        int left = 0;
        int right = 0;
        while(right<s.length()){
            if(s[right] == ' '){
                reverse(s.begin()+left , s.begin()+right);
                left = right+1;
            }
            right++;
        }
        reverse(s.begin()+left,s.begin()+right);

        return s;
    }
};