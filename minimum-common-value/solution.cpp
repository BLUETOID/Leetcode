1class Solution {
2public:
3    int getCommon(vector<int>& nums1, vector<int>& nums2) {
4        int i = 0;
5        int j = 0;
6        while (i < nums1.size() && j < nums2.size()) {
7            if (nums1[i] == nums2[j])
8                return nums1[i];
9            else if (nums1[i] < nums2[j])
10                i++;
11            else
12                j++;
13        }
14
15        return -1;
16    }
17};