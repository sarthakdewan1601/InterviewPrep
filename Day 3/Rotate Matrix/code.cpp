void Solution::rotate(vector<vector<int> > &arr) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int i,j;
    int n = arr.size();
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            swap(arr[i][j],arr[j][i]);
        }
    }
    for(i=0;i<n;i++)
    {
        reverse(arr[i].begin(),arr[i].end());
    }
}
