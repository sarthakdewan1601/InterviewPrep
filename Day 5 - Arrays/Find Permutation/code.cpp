vector<int> Solution::findPerm(const string A, int B) {
    int n = A.size();
    int i,j,k;
    stack<int> s;
    vector<int> ans;
    int num = 1;
    for(i=0;i<n;i++)
    {
        if(A[i] == 'D')
        {
            s.push(num);
            num++;
        }
        else
        {
            s.push(num);
            num++;
            while(!s.empty())
            {
                ans.push_back(s.top());
                s.pop();
            }
        }
    }
    s.push(num);
    while(!s.empty())
    {
        ans.push_back(s.top());
        s.pop();
    }
    return ans;
}
