/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */

// A subroutine to check if intervals overlap or not.
bool doesOverlap(Interval a, Interval b)
{
    return (min(a.end, b.end) >= max(a.start, b.start));
}

vector<Interval> Solution::insert(vector<Interval> &intervals, Interval newInterval) {
    int n = intervals.size();
    vector<Interval> ans;

    //case 1
    if(n == 0)
    {
        ans.push_back(newInterval);
        return ans;
    }
    //case 2
    if(newInterval.end < intervals[0].start)
    {
        ans.push_back(newInterval);
        for(int i=0;i<n;i++)
        {
            ans.push_back(intervals[i]);
        }
        return ans;
    }
    //case 3
    if(newInterval.start > intervals[n-1].end)
    {
        for(int i=0;i<n;i++)
        {
            ans.push_back(intervals[i]);
        }
        ans.push_back(newInterval);
        return ans;
    }
    //case 4
    //covering all the intervals
    if(newInterval.start < intervals[0].start && newInterval.end > intervals[n-1].end)
    {
        ans.push_back(newInterval);
        return ans;
    }
    bool overlap = true;
    for(int i=0;i<n;i++)
    {
        overlap = doesOverlap(intervals[i],newInterval);
        if(overlap == false)
        {
            ans.push_back(intervals[i]);
            if (i < n && newInterval.start > intervals[i].end && 
                newInterval.end < intervals[i + 1].start)
                ans.push_back(newInterval);
            continue;
        }
        Interval temp;
        temp.start = min(newInterval.start , intervals[i].start);
        while(i<n && overlap == true)
        {
            temp.end = max(newInterval.end,intervals[i].end);
            if(i == n-1)
            {
                overlap = false;
            }
            else
            {
                overlap = doesOverlap(intervals[i+1],newInterval);
            }
            i++;
        }
        i--;
        ans.push_back(temp);
    }
    return ans;

}
