int Solution::solve(vector<int> &arr) {
    sort(arr.begin(),arr.end());
    return arr[arr.size()-1] + arr[0];
}
