int Solution::reverse(int n) {
    int rev = 0;
    while (n)
    {
        if (rev > INT_MAX / 10 || rev < INT_MIN / 10) return 0;
        rev = rev * 10 + n % 10;
        n = n / 10;
    }
    return rev;
}
