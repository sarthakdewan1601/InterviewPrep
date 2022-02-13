vector<int> Solution::solve(vector<int> &arr) {
    int i, j, k, count1 = 0, count0 = 0;
    int n = arr.size();
    for (i = 0; i < n; i++)
    {
        if (arr[i] == 0) count0++;
        else count1++;
    }
    for (i = 0; i < count0; i++)
    {
        arr[i] = 0;
    }
    for (j = count0; j < n; j++)
    {
        arr[j] = 1;
    }
    return arr;
}
