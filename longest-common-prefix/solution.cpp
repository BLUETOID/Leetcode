
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string common_prefix=strs[0];

        for(int i=1;i<strs.length();i++){
            int j=0;
            while(j<min(common_prefix.length(),strs[i].length())){
                if(common_prefix[j] != strs[i][j]) break;
                j++;
            }
            common_prefix=common_prefix.substr(0,j);
        }
        
    }
};