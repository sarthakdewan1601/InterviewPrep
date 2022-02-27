int Solution::gcd(int a, int b) {

    if (a < b)
    {
        swap(a, b);
    }
    if (b == 0)
    {
        return a;
    }

    return gcd(a % b, b);
}
