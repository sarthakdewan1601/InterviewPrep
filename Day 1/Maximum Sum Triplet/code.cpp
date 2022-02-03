int helper(int ele, set<int> st)
{
    auto pos = st.find(ele);
    if(pos != st.begin())
        return (*--pos);
    else
    {
        return -1;
    }
}

int Solution::solve(vector<int> &arr) {
    int i,j,k;
    int n = arr.size();

    // stack<int> s; //maximum size == 3
    int ans = 0;
    // int sum = 0;
    int right[n];
    int maxi = arr[n-1];
    right[n-1] = arr[n-1];
    for(i=n-2;i>=0;i--)
    {
        right[i] = max(right[i+1],arr[i]);
    }
    set<int> st;
    st.insert(arr[0]);
    for(i=1;i<n;i++)
    {
        st.insert(arr[i]);
        auto it = st.find(arr[i]); 
        // int middle = arr[i];
        //we have to somehow find the max of right and left number to give max sum
        // int rightele = right[i];
        //int left = helper(arr[i],st);
        if(it != st.begin() && right[i] != arr[i])
        {
            ans = max(ans,(*--it)+arr[i]+right[i]);
        }
    }
    return ans;
}
