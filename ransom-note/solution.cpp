
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        
        unordered_map<char,int>freq1;
        for(auto x:magazine){
            freq1[x]++;
        }

        for(auto x :ransomNote ){
            freq1[x]--;
            if(freq1[x] < 0) return false;
        }

        return true;
