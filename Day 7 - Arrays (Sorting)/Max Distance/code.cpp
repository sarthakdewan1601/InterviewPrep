int Solution::maximumGap(const vector<int> &arr) {
    int i,j,k;
    int n = arr.size();
    vector<pair<int,int>> vec;
    for(i=0;i<n;i++)
    {
        vec.push_back({arr[i],i});
    }
    if(n==1)
    {
        return 0;
    }
    sort(vec.begin(),vec.end());
    int suffix[n];
    suffix[n-1] = vec[n-1].second;
    for(i=n-2;i>=0;i--)
    {
        suffix[i] = max(suffix[i+1],vec[i].second);
    }
    i=0;
    j=n-1;
    int ans = INT_MIN;
    for(i=0;i<n;i++)
    {
        ans = max(ans,suffix[i] - vec[i].second);
    }
    return ans;
}
