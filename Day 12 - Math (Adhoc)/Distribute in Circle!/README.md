# Distribute in a Circle

#### Easy

Link - https://www.interviewbit.com/problems/distribute-in-circle/

* Easy level question

<br>


Code-

```
int Solution::solve(int a, int b, int c) {
    int sum = a+c;
    if(a+c <= b)
    {
        return sum-1;
    }
    else
    {
        return ((a%b)+c-1)%b;
    }
}


```

***Cheers!!***