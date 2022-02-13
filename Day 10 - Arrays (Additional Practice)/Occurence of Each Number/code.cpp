vector<int> Solution::findOccurences(vector<int> &arr) {
    map<int, int> mp;
    int i, j, k, n = arr.size();
    for (i = 0; i < n; i++)
    {
        mp[arr[i]]++;
    }
    vector<int> ans;
    for (auto i : mp)
    {
        ans.push_back(i.second);
    }
    return ans;
}
