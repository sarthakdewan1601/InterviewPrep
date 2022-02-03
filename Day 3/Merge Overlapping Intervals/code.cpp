/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
bool make_comparison(Interval a, Interval b)
{
    return a.start < b.start;
}
vector<Interval> Solution::merge(vector<Interval> &arr) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    //we will use stacks

    stack<Interval> s;
    int n = arr.size();
    int i,j,k;
    sort(arr.begin(),arr.end(),make_comparison);
    s.push(arr[0]);
    for(i=1;i<n;i++)
    {
        Interval ele = s.top();
        if(ele.end < arr[i].start)
        {
            s.push(arr[i]);
        }
        else
        {
            ele.end = max(arr[i].end,ele.end);
            s.pop();
            s.push(ele);
        }
    }
    vector<Interval> ans;
    while(!s.empty())
    {
        ans.push_back(s.top());
        s.pop();
    }
    reverse(ans.begin(),ans.end());
    return ans;
}
