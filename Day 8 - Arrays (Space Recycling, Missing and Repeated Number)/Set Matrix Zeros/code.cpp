void Solution::setZeroes(vector<vector<int>> &arr) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int i, j, k, n = arr.size();
    int m = arr[0].size();
    vector<int> row(n, 1);
    vector<int> col(m, 1);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (arr[i][j] == 0)
            {
                row[i] = 0;
                col[j] = 0;
            }
        }
    }
    //for rows
    for (i = 0; i < n; i++)
    {
        if (row[i] == 0)
        {
            for (j = 0; j < m; j++)
            {
                arr[i][j] = 0;
            }
        }
    }
    //for cols
    for (j = 0; j < m; j++)
    {
        if (col[j] == 0)
        {
            for (i = 0; i < n; i++)
            {
                arr[i][j] = 0;
            }
        }
    }
}
