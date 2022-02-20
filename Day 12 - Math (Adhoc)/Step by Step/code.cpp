int Solution::solve(int A) {
    int i = 0;
    int x = 0;
    int c = 0;
    int B = abs(A);
    while (x < B || (x - B) % 2 != 0)
    {
        i++;
        x += i;
    }
    return i;
}
