int Solution::trailingZeroes(int n) {

    int ans = 0;
    int i, j, k;

    for (i = 0; i <= n; i++)
    {
        int temp = i;
        while ((temp % 5 == 0) && (temp > 0))
        {
            temp = temp / 5;
            ans++;
        }
    }
    return ans;
}
