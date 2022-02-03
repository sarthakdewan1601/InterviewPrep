int Solution::solve(int n, vector<int> &arr) {
    int i,j,k;
    
    //O(n)
    vector<int> prefix;
    vector<int> suffix;
    int sum = 0;
    int tot_sum = 0;
    for(i=0;i<n;i++)
    {
        tot_sum += arr[i];
    }
    if(tot_sum % 3 != 0)
    {
        return 0;
    }
    for(i=0;i<n;i++)
    {
        sum += arr[i];
        if(sum == tot_sum/3)
        {
            prefix.push_back(i);
        }
    }
    sum = 0;
    for(i=n-1;i>=0;i--)
    {
        sum += arr[i];
        if(sum == tot_sum/3)
        {
            suffix.push_back(i);
        }
    }
    int ans = 0;
    for(i=0;i<prefix.size();i++)
    {
        for(j = 0; j< suffix.size(); j++)
        {
            int x = 0;
            int flag = 0;
            for(k = prefix[i] + 1; k < suffix[j] ; k++)
            {
                x += arr[k];
                flag = 1;
            }
            if(x == tot_sum/3 && flag == 1)
            {
                ans++;
            }
        }
    }
    return ans;
}
