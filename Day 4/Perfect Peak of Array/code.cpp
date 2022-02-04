int Solution::perfectPeak(vector<int> &arr) {
    int n = arr.size();
    int i,j,k;
    for(i=1;i<n-1;i++)
    {
        if(arr[i] > arr[i-1] && arr[i] < arr[i+1])
        {
            bool check = true;
            for(j = i-1;j>=0;j--)
            {
                if(arr[j] >= arr[i])
                {
                    check = false;
                    break;
                }
            }
            for(j=i+1;j<n;j++)
            {
                if(arr[j] <= arr[i])
                {
                    check = false;
                    break;
                }
            }
            if(check)
            {
                return 1;
            }
        }
    }
    return 0;
}
