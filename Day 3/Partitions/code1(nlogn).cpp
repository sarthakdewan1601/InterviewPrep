int binarysearch(vector<int> pos, int x)
{
    int low = 0;
    int high = pos.size() - 1;
    while(low <= high)
    {
        int mid = low + (high-low)/2;
        if(pos[mid] <= x)
        {
            low = mid + 1;
        }
        else if(pos[mid] > x && pos[mid-1] <= x)
        {
            return mid;
        }
        else if(pos[mid] > x && mid == 0)
        {
            return mid;
        }
        else{
            high = mid - 1;
        }
    }
    return -1;
}

int Solution::solve(int n, vector<int> &arr) {
    int i,j,k;
    int prefix[n];
    prefix[0] = arr[0];
    int suffix[n];
    for(i=1;i<n;i++)
    {
        prefix[i] = prefix[i-1] + arr[i]; 
    }
    if(prefix[n-1] % 3 != 0)
    {
        return 0;
    }
    suffix[n-1] = arr[n-1];
    vector<int> pos;
    for(i=n-2;i>=0;i--)
    {
        suffix[i] = suffix[i+1] + arr[i];
    }
    for(i=0;i<n;i++)
    {
        if(suffix[i]*3 == prefix[n-1])
        {
            pos.push_back(i);
        }
    }
    //find in prefix
    int ans = 0;
    for(i=0;i<n;i++)
    {
        if(prefix[i] == prefix[n-1]/3)
        {
            //binary search
            int res = binarysearch(pos,i+1);
            if(res != -1)
            {
                ans += pos.size() - res;
            }
        }
    }
    return ans;
}
