vector<int> Solution::repeatedNumber(const vector<int> &arr) {
    vector<int> temp = arr;
    long long int i, j, k;
    long long int n = arr.size();
    vector<int> ans;

    for (i = 0; i < n; i++)
    {
        if ((temp[abs(temp[i]) - 1]) > 0)
        {
            temp[abs(temp[i]) - 1] = -temp[abs(temp[i]) - 1];
        }
        else
        {
            ans.push_back(abs(temp[i]));
        }
    }
    for (i = 0; i < n; i++)
    {
        if (temp[i] > 0)
        {
            ans.push_back(i + 1);
        }
    }
    return ans;
}
