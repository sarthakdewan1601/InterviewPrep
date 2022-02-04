vector<int> Solution::nextPermutation(vector<int> &arr) {
    //steps for this algo-
    /*
    1. Traverse from right -> left from n-2
    2. a[i+1] > a[i]
    3. if i == -1, then decreasing order, return reverse
    4. reverse the array from i+1 to n-1
    5. traverse from i+1-->n-1, find smallest number greater than a[i], swap it
    6. Required answer.
    */
    int n = arr.size();
    if(n==1) return arr;
    int i,j,k;
    for(i=n-2;i>=0;i--)
    {
        if(arr[i+1] > arr[i])
        {
            break;
        }
    }
    if(i==-1)
    {
        reverse(arr.begin(),arr.end());
        return arr;
    }
    reverse(arr.begin()+i+1,arr.end());
    for(j = i + 1; j < n ; j++)
    {
        if(arr[j] > arr[i])
        {
            swap(arr[j],arr[i]);
            break;
        }
    }
    return arr;
}
