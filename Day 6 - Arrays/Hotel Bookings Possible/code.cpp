bool Solution::hotel(vector<int> &arrive, vector<int> &depart, int k) {
    vector<pair<int,int>> vec;
    int i,j;
    int n = arrive.size();

    sort(arrive.begin(),arrive.end());
    sort(depart.begin(),depart.end());

    for(i=0;i<n;i++)
    {
        if(i+k<n && arrive[i+k] < depart[i])
        {
            return false;
        }
    }
    return true;
}
