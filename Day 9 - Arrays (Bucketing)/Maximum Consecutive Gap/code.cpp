int Solution::maximumGap(const vector<int> &arr) {
    int i, j, k;
    // vector<int> temp = arr;
    int n = arr.size();
    if (n < 2) return 0;
    int ans = INT_MIN;
    // sort(temp.begin(),temp.end());
    // for(i=0;i<n-1;i++)
    // {
    //     int diff = temp[i+1] - temp[i];
    //     ans=max(ans,(diff));
    // }
    // return ans;

    //method - 2 better method
    vector<int> temp = arr;
    int min_ele = *min_element(temp.begin(), temp.end());
    int max_ele = *max_element(temp.begin(), temp.end());

    // cout<<min_ele<<" "<<max_ele<<endl;

    int interval = ceil((max_ele - min_ele + 0.0) / (n - 1));
    //n-1 buckets
    vector<int> bucketMax(n - 1, -1);
    vector<int> bucketMin(n - 1, INT_MAX);

    for (i = 0; i < n; i++)
    {
        if (temp[i] == min_ele || temp[i] == max_ele) continue;
        //magic formula
        int bucketNumber =  (temp[i] - min_ele) / interval;
        bucketMax[bucketNumber] = max(bucketMax[bucketNumber], temp[i]);
        bucketMin[bucketNumber] = min(bucketMin[bucketNumber], temp[i]);
    }

    int prev = min_ele;
    for (i = 0; i < n - 1; i++)
    {
        if (bucketMax[i] == -1) continue;
        ans = max(ans, bucketMin[i] - prev);
        prev = bucketMax[i];
    }

    ans = max(ans, max_ele - prev);

    return ans;

}
