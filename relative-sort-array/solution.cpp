
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
    unordered_map<int, int> pos;
    for (int i = 0; i < arr2.size(); i++)
        pos[arr2[i]] = i;

    sort(arr1.begin(), arr1.end(), [&](int a, int b) {
        int ka = pos.count(a) ? pos[a] : 1000 + a;
        int kb = pos.count(b) ? pos[b] : 1000 + b;
        return ka < kb;
    });
    return arr1;
}
};