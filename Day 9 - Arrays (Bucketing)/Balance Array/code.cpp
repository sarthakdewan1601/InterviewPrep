int Solution::solve(vector<int> &arr) {
    int n = arr.size();
    int leftOdd[n], leftEven[n];
    int rightOdd[n], rightEven[n];
    int odd = 0, even = 0;
    for (int i = 0; i < n; i++)
    {
        leftOdd[i] = odd;
        leftEven[i] = even;
        if (i % 2 == 0) even += arr[i];
        else odd += arr[i];
    }
    odd = 0;
    even = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        rightOdd[i] = odd;
        rightEven[i] = even;
        if (i % 2 == 0) even += arr[i];
        else odd += arr[i];
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (leftOdd[i] + rightEven[i] == leftEven[i] + rightOdd[i])
        {
            count++;
        }
    }
    return count;
}
