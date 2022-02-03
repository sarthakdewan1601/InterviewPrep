static bool make_compare(string x, string y)
{
    string s1 = x + y;
    string s2 = y + x;
    if(s1 > s2)
    {
        return true;
    }
    else
    {
        return false;
    }
}

string Solution::largestNumber(const vector<int> &arr) {
    int n = arr.size();
    string ans = "";
    int i,j,k;
    vector<string> arr2;
    int count0 = 0;
    for(i=0;i<n;i++)
    {
        if(arr[i] == 0)
        {
            count0++;
        }
    }
    if(count0 == n)
    {
        return "0";
    }
    for(i=0;i<n;i++)
    {
        string temp = to_string(arr[i]);
        arr2.push_back(temp);
    }
    // for(i=0;i<n;i++)
    // {
    //     cout<<arr2[i]<<" ";
    // }
    // cout<<endl;
    sort(arr2.begin(),arr2.end(),make_compare);
    // for(i=0;i<n;i++)
    // {
    //     cout<<arr2[i]<<" ";
    // }
    // cout<<endl;
    for(i=0;i<n;i++)
    {
        ans.append(arr2[i]);
    }
    return ans;
}
