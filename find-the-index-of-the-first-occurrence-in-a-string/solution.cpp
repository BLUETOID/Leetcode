
class Solution {
public:
    int strStr(string haystack, string needle) {
        if(haystack.length() < needle.length())  return -1;

        vector<char>needed(needle.begin(),needle.end());

        for(int i=0;i<=haystack.size()-needle.size();i++){
            vector<char>test;
            for(int j=i;j<i+needle.length();j++){
                test.push_back(haystack[j]);
            }

            if(needed == test) return i;
        }

        return -1;
    }
};