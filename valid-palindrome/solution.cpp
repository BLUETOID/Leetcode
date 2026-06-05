
class Solution {
public:
    bool isPalindrome(string s) {
        string lowercase="";
        string reversed ="";
        for(char c:s){
            if(isalnum(c)) lowercase += tolower(c);
        }
        int n = lowercase.length();
        for(int i=n-1;i>=0;i--){
            reversed+=lowercase[i];
        }
        return lowercase==reversed;
    }
};