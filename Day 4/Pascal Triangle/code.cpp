vector<vector<int>> Solution::solve(int num) {
    vector<vector<int>> answer;
    int i,j,k;
    if(num == 0)
    {
        return answer;
    }
    if(num == 1)
    {
        answer.push_back({1});
        return answer;
    }
    if(num == 2)
    {
        answer.push_back({1});
        answer.push_back({1,1});
        return answer;
    }
    answer.push_back({1});
    answer.push_back({1,1});
    for(i=2;i<num;i++)
    {
        vector<int> temp;
        temp.push_back(1);
        for(j=1;j<=i-1;j++)
        {
            temp.push_back(answer[i-1][j-1] + answer[i-1][j]);
        }
        temp.push_back(1);
        answer.push_back(temp);
    }
    return answer;
}
