# Largest Number

#### Medium

Link - https://www.interviewbit.com/problems/largest-number/

* Had to go through solution for this one since I didn't know we can sort string in this way
* Amazing concept of sorting learned today


## Code for sorting which I learned - 

```
static bool make_compare(string x, string y)
{
    string s1 = x + y;
    string s2 = y + x;
    if(s1 > s2)
    {
        return true;
    }
    else
    {
        return false;
    }
}
```

* Great Problem. Really enjoyed it after getting stuck at it for hours :)
