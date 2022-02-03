## Examples -

* Spiral Order Matrix I
```
vector<int> Solution::spiralOrder(const vector<vector<int> > &arr) {
    int i,j,k;
    vector<int> ans;
    int n = arr.size();
    int m = arr[0].size();
    int top = 0;
    int bottom = n-1;
    int left = 0;
    int right = m-1;
    int count = 1;
    while(left <= right && top <= bottom)
    {
        if(count == 1)
        {
            for(i=left;i<=right;i++)
            {
                ans.push_back(arr[top][i]);
            }
            top++;
            count = 2;
        }
        else if(count == 2)
        {
            for(i=top;i<=bottom;i++)
            {
                ans.push_back(arr[i][right]);
            }
            count = 3;
            right--;
        }
        else if(count == 3)
        {
            for(i=right;i>=left;i--)
            {
                ans.push_back(arr[bottom][i]);
            }
            count = 4;
            bottom--;
        }
        else
        {
            for(i=bottom;i>=top;i--)
            {
                ans.push_back(arr[i][left]);
            }
            count = 1;
            left++;
        }
    }
    return ans;
}

```
* Max Non Negative Subarray
```
vector<int> Solution::maxset(vector<int> &arr) {
    long long int i,j,k;
    long long int n = arr.size();
    long long int sum = 0;
    long long int ans = INT_MIN;
    vector<vector<int>> vec;
    vector<int> vec1;
    for(i=0;i<n;i++)
    {
        long long int temp = sum;
        sum += arr[i];
        if(sum < temp)
        {
            ans = max(ans,temp);
            sum = 0;
            if(vec1.size() != 0)
            {
                vec.push_back(vec1);
                vec1.clear();
            }
            continue;
        }
        ans = max(ans,sum);
        vec1.push_back(arr[i]);
    }
    if(vec1.size() != 0)
    {
        vec.push_back(vec1);
    }
    // cout<<ans<<endl;
    // cout<<vec.size()<<endl;
    // for(i=0;i<n;i++)
    // {
    //     for(j = 0 ; j < vec[i].size();j++)
    //     {
    //         cout<<vec[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    // cout<<endl;
    for(i=0;i<vec.size();i++)
    {
        sum = 0;
        for(j = 0; j < vec[i].size();j++)
        {
            sum += vec[i][j];
        }
        if(sum == ans)
        {
            return vec[i];
        }
        else
        {
            continue;
        }
    }
    vector<int> empty;
    return empty;
}

```
