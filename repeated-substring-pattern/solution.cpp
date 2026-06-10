
class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string doubled = s+s;
        string mid = doubled.substr(1,doubled.size()-2);
        return mid.find(s)!=string::npos;
    }
};