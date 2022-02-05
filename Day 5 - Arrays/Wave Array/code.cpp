vector<int> Solution::wave(vector<int> &arr) {
    int n = arr.size();
    int i,j,k;
    sort(arr.begin(),arr.end());
    for(i=0;i<n-1;i+=2)
    {
        swap(arr[i],arr[i+1]);
    }
    return arr;
}
