int Solution::solve(int A, int B) {
    int steps = 0;
    int x = A + 1;
    int y = B + 1;
    while (x != 9 && y != 9)
    {
        steps++;
        x++;
        y++;
    }
    // cout<<steps<<endl;
    x = A - 1;
    y = B + 1;
    while (x != 0 && y != 9)
    {
        steps++;
        x--;
        y++;
    }
    // cout<<steps<<endl;
    x = A + 1;
    y = B - 1;
    while (x != 9 && y != 0)
    {
        steps++;
        x++;
        y--;
    }
    // cout<<steps<<endl;
    x = A - 1;
    y = B - 1;
    while (x != 0 && y != 0)
    {
        steps++;
        x--;
        y--;
    }
    // cout<<steps<<endl;
    return steps;
}
