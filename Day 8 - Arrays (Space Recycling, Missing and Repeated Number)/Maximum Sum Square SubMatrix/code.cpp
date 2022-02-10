int Solution::solve(vector<vector<int> > &arr, int b) {
    int i, j, k, sum = 0;
    int n = arr.size();
    vector<vector<int>> vec;
    int ans = INT_MIN;

    for (j = 0; j < n; j++)
    {
        sum = 0;
        vector<int> temp;
        for (i = 0; i < b; i++)
        {
            sum += arr[i][j];
        }
        temp.push_back(sum);

        for (i = 1; i + b <= n; i++)
        {
            sum += arr[i + b - 1][j] - arr[i - 1][j];
            temp.push_back(sum);
        }
        vec.push_back(temp);
    }

    for (j = 0; j < vec[0].size(); j++)
    {
        sum = 0;
        for (i = 0; i < b; i++)
        {
            sum += vec[i][j];
        }
        ans = max(ans, sum);
        for (i = 1; i + b <= n; i++)
        {
            sum += vec[i + b - 1][j] - vec[i - 1][j];
            ans = max(ans, sum);
        }
    }
    return ans;
}
