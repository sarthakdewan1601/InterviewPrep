vector<int> Solution::subUnsort(vector<int> &arr) {
    int i, j, k;
    int n = arr.size();
    vector<int> vec(n);
    for (i = 0; i < n; i++)
    {
        vec[i] = arr[i];
    }
    sort(vec.begin(), vec.end());
    vector<int> ans;
    if (arr == vec)
    {
        ans.push_back(-1);
        return ans;
    }
    int l = 0;
    int r = n - 1;
    for (i = 0; i < n; i++)
    {
        if (vec[i] != arr[i])
        {
            l = i;
            break;
        }
    }
    for (i = n - 1; i >= 0; i--)
    {
        if (vec[i] != arr[i])
        {
            r = i;
            break;
        }
    }
    ans.push_back(l);
    ans.push_back(r);
    return ans;
}
