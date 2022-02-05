int Solution::solve(vector<int> &arr) {
    sort(arr.begin(),arr.end());
    int i,j,k,n = arr.size();
    for(i=0;i<n;i++)
    {
        while(((i < n - 1) && (arr[i] == arr[i+1])) || (arr[i] < 0))
        {
            // cout<<"Hello"<<endl;
            i++;
        }
        if(n-i-1 == arr[i])
        {
            return 1;
        }
    }
    return -1;
}
