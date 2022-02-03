int Solution::solve(vector<int> &arr, int b) {
    

    int i,j,k;
    int n = arr.size();
    int count = 0;
    i = 0;
    // j = n-1;
    // int count1 = 0;
    while(i<n)
    {
        int right = min(n-1,i+b-1);
        int left = max(0,i-b+1);
        bool check = false;
        while(right >= left)
        {
            if(arr[right] == 1)
            {
                check = true;
                break;
            }
            right--;
        }
        if(check == false)
        {
            return -1;
        }
        count++;
        i = right + b;
    }
    return count;
}
