vector<int> Solution::plusOne(vector<int> &arr) {
    int i,j,k;
    int n = arr.size();
    
    vector<int> vec;

    // INITIAL APPROACH

    // for(i=n-1;i>=0;i--)
    // {
    //     if(i == n-1)
    //     {
    //         if(arr[i] == 9)
    //         {
    //             vec.push_back(0);
    //             arr[i-1] = arr[i-1] + 1;
    //             continue;
    //         }
    //         // arr[i] = arr[i] + 1;
    //         vec.push_back(arr[i]+1);
    //     }
    //     else if(i > 0)
    //     {
    //         if(arr[i] != 10)
    //         {
    //             vec.push_back(arr[i]);
    //         }
    //         else
    //         {
    //             vec.push_back(0);
    //             arr[i-1] = arr[i-1] + 1;
    //         }
    //     }
    //     else
    //     {
    //         if(arr[i] != 10)
    //         {
    //             vec.push_back(arr[i]);
    //         }
    //         else
    //         {
    //             vec.push_back(0);
    //             vec.push_back(1);
    //         }
    //     }
    // }
    // reverse(vec.begin(),vec.end());
    // return vec;

    //SOLUTION APPROACH

    i = n-1;
    while(i>=0 && arr[i] == 9)
    {
        arr[i] = 0;
        i--;
    }

    if(i < 0)
    {
        arr.insert(arr.begin(),1,1);
    }
    else{
        arr[i]++;
    }
    vector<int> ans;
    i = 0;
    while(arr[i] == 0)
    {
        i++;
    }
    for(j = i; i < arr.size(); i++)
    {
        ans.push_back(arr[i]);
    }
    return ans;
}
