int Solution::solve(vector<int> &arr, int b) {
    int n = arr.size();
    if(b == 1)
    {
        return max(arr[0],arr[n-1]);
    }
    
    int i = 0;
    int j;
    int sum1 = 0;
    for(i=0;i<n;i++)
    {
        sum1 += arr[i];
    }

    int sum2 = 0;
    i = 0;
    j = (n-b-1);
    for(int k = i ; k <= j ; k++)
    {
        sum2 += arr[k];
    }
    i++;
    j++;
    int mini = sum2;
    while(j<n)
    {
        sum2 = sum2 + arr[j] - arr[i-1];
        mini = min(sum2,mini);
        i++;
        j++;
    }
    return sum1-mini;
}
