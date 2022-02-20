# Is Rectangle?

#### Easy

Link - https://www.interviewbit.com/problems/is-rectangle/

* Easy peasy
<br>


Code-

```
int Solution::solve(int a, int b, int c, int d) {
    if((a == b && c == d) || (a == c && b == d) || (a == d && b == c))
    {
        return 1;
    }
    return 0;
}


```

***Cheers!!***