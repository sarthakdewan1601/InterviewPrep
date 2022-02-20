int Solution::hammingDistance(const vector<int> &arr) {
    long dist = 0;
    long n = arr.size();
    for (int i = 0; i < 32; i++)
    {
        long counton = 0;
        for (auto val : arr)
        {
            if ((val & 1 << i) != 0)
            {
                counton++;
            }
        }
        long countoff = n - counton;
        long diff = 2 * counton * countoff;
        dist += diff;
    }
    return dist % 1000000007;
}
