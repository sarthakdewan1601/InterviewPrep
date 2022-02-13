vector<int> Solution::solve(vector<int> &arr) {
    int i, j, k;
    int n = arr.size();
    vector<int> answer;

    for (i = 0; i < n; i++)
    {
        if (arr[i] != 0)
            answer.push_back(arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (arr[i] == 0)
            answer.push_back(arr[i]);
    }
    return answer;
}
