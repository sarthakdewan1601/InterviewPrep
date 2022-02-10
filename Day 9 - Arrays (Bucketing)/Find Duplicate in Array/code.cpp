int Solution::repeatedNumber(const vector<int> &arr) {
    vector<int> temp = arr;
    int i, j, k;
    int n = arr.size();
    //unordered_map<int,int> umap;
    for (i = 0; i < n; i++)
    {
        if (temp[abs(temp[i]) - 1] > 0)
        {
            temp[abs(temp[i]) - 1] = -temp[abs(temp[i]) - 1];
        }
        else
        {
            return abs(temp[i]);
        }
    }
    return -1;
}
