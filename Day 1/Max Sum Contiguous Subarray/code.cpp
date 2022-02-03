int Solution::maxSubArray(const vector<int> &arr) {
    int n = arr.size();
    int i,j,k;
    if(n == 1)
    {
        return arr[0];
    }
    int positive = 0;
    int negative = 0;
    for(i=0;i<n;i++)
    {
        if(arr[i] >= 0) positive++;
        else negative++;
    }
    if(positive == 0)
    {
        int max_ele = INT_MIN;
        for(i=0;i<n;i++)
        {
            max_ele = max(max_ele,arr[i]);
        }
        return max_ele;
    }
    else
    {
        int ans = INT_MIN;
        int sum = 0;
        for(i=0;i<n;i++)
        {
            int temp = sum;
            sum += arr[i];
            if(sum < 0)
            {
                sum = 0;
            }
            ans = max(ans,sum);
        }
        return ans;
    }
    return 0;
}
