
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>mergedArray;
        int n = nums1.size();
        int m = nums2.size();
        int i=0;
        int j=0;
        while(i<n || j<m){
            if(i<n){
                mergedArray.push_back(nums1[i]);
                i++;
            }
            if(j<m){
                mergedArray.push_back(nums2[j]);
                j++;
            }
        }
        sort(mergedArray.begin(),mergedArray.end());

        if((n+m) %2 != 0){
            return mergedArray[(n+m)/2];
        }
        else{
            return (mergedArray[(n+m)/2]+mergedArray[(n+m)/2-1])/2.0;
        }
    }
};