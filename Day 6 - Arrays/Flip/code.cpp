vector<int> Solution::flip(string s) {
    int i,j,k;
    int n = s.size();
    int count1 = 0;
    int count0 = 0;
    vector<int> ans;

    for(i=0;i<n;i++)
    {
        if(s[i] == '0') count0++;
        else count1++;
    }
    if(count1 == n)
    {
        return ans;
    }

    else if(count0 == n)
    {
        ans.push_back(1);
        ans.push_back(n);
        return ans;
    }

    int sum = 0;
    int max_sum = INT_MIN;
    int l,r,ltemp=0;
    for(i=0;i<n;i++)
    {
        if(s[i] == '0') sum++;
        else sum--;

        if(sum > max_sum)
        {
            l = ltemp;
            r = i;
            max_sum = sum;
        }
        if(sum < 0)
        {
            ltemp = i+1;
            sum = 0;
        }
    }
    ans.push_back(l+1);
    ans.push_back(r+1);
    return ans;
}
