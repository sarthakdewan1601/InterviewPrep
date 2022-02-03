vector<vector<int> > Solution::generateMatrix(int a) {
    int i,j,k;
    int n = a;
    int top = 0;
    int bottom = n-1;
    int left = 0;
    int right = n-1;
    int count = 1;
    int num = 1;
    vector<vector<int>> arr( n , vector<int> (n, 0));
    while(left <= right && top <= bottom)
    {
        if(count == 1)
        {
            for(i=left;i<=right;i++)
            {
                arr[top][i] = num;
                num++;
            }
            count = 2;
            top++;
        }
        else if(count == 2)
        {
            for(i=top;i<=bottom;i++)
            {
                arr[i][right] = num;
                num++;
            }
            count = 3;
            right--;
        }
        else if(count == 3)
        {
            for(i = right; i >= left;i--)
            {
                arr[bottom][i] = num;
                num++;
            }
            count = 4;
            bottom--;
        }
        else if(count == 4)
        {
            for(i=bottom;i>=top;i--)
            {
                arr[i][left] = num;
                num++;
            }
            count = 1;
            left++;
        }
    }
    return arr;
}
