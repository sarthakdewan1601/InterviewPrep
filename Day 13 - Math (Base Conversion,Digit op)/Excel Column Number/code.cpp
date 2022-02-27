int Solution::titleToNumber(string columnTitle) {
    int ans = 0;
    int i, j, k = 0;
    int len = columnTitle.size() - 1;
    while (len >= 0)
    {
        ans += pow(26, len) * int(columnTitle[k] - 'A' + 1);
        len--;
        k++;
    }
    return ans;
}
