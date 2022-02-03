vector<int> Solution::solve(vector<int> &arr) {
    int n = arr.size();
    int i,j,k;
    multiset<int> s;
    for(i=0;i<n;i++)
    {
        arr[i] = abs(arr[i]);
        s.insert(arr[i]*arr[i]);
    }
    vector<int> ans;
    for(auto it = s.begin();it!=s.end();it++)
    {
        ans.push_back(*it);
    }
    return ans;
}
