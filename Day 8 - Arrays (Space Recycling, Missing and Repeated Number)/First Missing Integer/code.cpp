int Solution::firstMissingPositive(vector<int> &arr) {
    int n, i, j, k;
    n = arr.size();
    for (i = 0; i < n; i++)
    {
        if (arr[i] > 0 && arr[i] <= n)
        {
            if (arr[arr[i] - 1] != arr[i])
            {
                swap(arr[arr[i] - 1], arr[i]);
                i--;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        if (arr[i] != i + 1) return i + 1;
    }
    return n + 1;
}
