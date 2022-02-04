vector<vector<int>> Solution::diagonal(vector<vector<int> > &arr) {
    int n = arr.size();
    int i,j,k;
    vector<vector<int>> res;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(arr[i][j] != -1)
            {
                vector<int> temp;
                int x = i;
                int y = j;
                while(x < n && y > -1)
                {
                    temp.push_back(arr[x][y]);
                    arr[x][y] = -1;
                    x++;
                    y--;
                }
                res.push_back(temp);
            }
        }
    }
    return res;
}
