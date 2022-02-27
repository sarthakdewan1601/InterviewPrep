int Solution::isPalindrome(int n) {
    string s = to_string(n);

    string temp = s;
    reverse(s.begin(), s.end());

    if (temp == s)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
