int Solution::coverPoints(vector<int> &a, vector<int> &b) {
    int n = a.size();
    int i,j,k;
    int ans = 0;
    for(i=0;i<n-1;i++)
    {
        int x1 = a[i];
        int y1 = b[i];
        int x2 = a[i+1];
        int y2 = b[i+1];

        //x1,y1 --> x2,y2

        if(x1 == x2)
        {
            ans += abs(y1-y2);
        }
        else if(y1 == y2)
        {
            ans += abs(x1-x2);
        }
        else if(abs(x1-x2) == abs(y1-y2))
        {
            ans += abs(x1-x2);
        }
        else
        {
            // int diff1 = abs(y2-y1);
            // int diff2 = abs(x1-x2);
            // if(diff2 > diff1)
            // {
            //     ans += abs(y2-y1);
            //     x1 = x1 - (y2-y1);
            //     ans += x1 - x2;
            // }
            if((y2 > y1) && (x2 < x1))
            {
                int diff1 = y2-y1;
                int diff2 = x1-x2;
                if(diff2 > diff1)
                {
                    ans += y2-y1;
                    x1 = x1 - (y2-y1);
                    ans += x1 - x2;
                }
                else{
                    ans += x1 - x2;
                    y1 = y1 + (x1-x2);
                    ans += y2 - y1;
                }
            }
            else if((y2 > y1) && (x2 > x1))
            {
                int diff1 = y2-y1;
                int diff2 = x2-x1;
                if(diff2 > diff1)
                {
                    ans += y2-y1;
                    x1 = x1 + (y2-y1);
                    ans += x2 - x1;
                }
                else{
                    ans += x2 - x1;
                    y1 = y1 + (x2-x1);
                    ans += y2 - y1;
                }
            }
            else if((y1 > y2) && (x2 < x1))
            {
                int diff1 = y1-y2;
                int diff2 = x1-x2;
                if(diff2 > diff1)
                {
                    ans += y1-y2;
                    x1 = x1 - (y1-y2);
                    ans += x1 - x2;
                }
                else{
                    ans += x1 - x2;
                    y1 = y1 - (x1-x2);
                    ans += y1 - y2;
                }
            }
            else
            {
                int diff1 = y1-y2;
                int diff2 = x2-x1;
                if(diff2 > diff1)
                {
                    ans += y1-y2;
                    x1 = x1 + (y1-y2);
                    ans += x2 - x1;
                }
                else{
                    ans += x2 - x1;
                    y1 = y1 - (x2-x1);
                    ans += y1 - y2;
                }
            }
        }
    }
    return ans;
}
