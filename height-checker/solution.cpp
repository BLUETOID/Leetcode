class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int>result=heights;
        sort(result.begin(),result.end());
        int count=0;
        for(int i=0;i<heights.size();i++){
            if(heights[i]!=result[i]) count++;
        }
    }

        return count;
};
