void start_color(vector<int> &start, char col,int n, vector<string> &arr,int j)
{
    for(int i = 0; i < n ; i++)
    {
        if(arr[i][j] == col)
        {
            start.push_back(i+1);
            return;
        }
    }
    start.push_back(INT_MIN);
}

void end_color(vector<int> &end, char col,int n, vector<string> &arr,int j)
{
    for(int i = n-1; i >= 0 ; i--)
    {
        if(arr[i][j] == col)
        {
            end.push_back(i+1);
            return;
        }
    }
    end.push_back(INT_MAX);
}

int Solution::solve(vector<string> &arr) {
    int n = arr.size();
    int m = arr[0].size();
    int i,j,k;
    int ans = 0;
    unordered_map<int,set<char>> umap;
    for(i=0;i<m;i++)
    {
        for(j = 0; j < n ; j++)
        {
            umap[i].insert(arr[j][i]);
        }
    }
    for(i=0;i<m;i++)
    {
        vector<int> start;
        vector<int> end;
        start_color(start,'r',n,arr,i);
        end_color(end,'r',n,arr,i);
        start_color(start,'g',n,arr,i);
        end_color(end,'g',n,arr,i);
        start_color(start,'b',n,arr,i);
        end_color(end,'b',n,arr,i);
        char col1, col2;
        int base = INT_MIN;
        for(j=0;j<3;j++)
        {
            for(k=0;k<3;k++)
            {
                if(j!=k && start[j] != INT_MIN && end[k] != INT_MAX)
                {
                    int diff = abs(end[k] - start[j]) + 1;
                    if(diff > base)
                    {
                        base = diff;
                        if(j == 0) col1 = 'r';
                        else if(j == 1) col1 = 'g';
                        else col1 = 'b';

                        if(k == 0) col2 = 'r';
                        else if(k == 1) col2 = 'g';
                        else col2 = 'b';
                    }
                }
            }
        }
        char col3;
        if((col1 == 'r' && col2 == 'b') || (col1 == 'b' && col2 == 'r')) col3 = 'g';
        else if((col1 == 'r' && col2 == 'g') || (col1 == 'g' && col2 == 'r')) col3 = 'b';
        else if((col1 == 'g' && col2 == 'b') || (col1 == 'b' && col2 == 'g')) col3 = 'r';
        int height = INT_MIN;
        for(j=0;j<m;j++)
        {
            if(i!=j)
            {
                if(umap[j].find(col3) != umap[j].end())
                {
                    height = max(height,abs(i-j)+1);
                }
            }
        }
        int temp = ceil(float(base) * float(height)/2);
        ans = max(ans,temp);
    }
    return ans;
}
