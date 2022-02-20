int Solution::isPower(int n) {

    int i, j, k;
    if (n <= 1) return true;
    //if N=a^b
    //taking log both sides
    //logn = bloga
    //b = logn / loga
    for (i = 2; i <= sqrt(n); i++)
    {
        int val = log(n) / log(i);
        if (pow(i, val) == n)
        {
            return true;
        }
    }
    return false;
}
