class Solution {
public:
    vector<int> diStringMatch(string s) {
        int lo = 0, hi = s.size();
        vector<int> res;
        for (char c : s)
            res.push_back(c == 'I' ? lo++ : hi--);
        res.push_back(lo);
        return res;
    }
};
