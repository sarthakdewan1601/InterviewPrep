int Solution::repeatedNumber(const vector<int> &arr) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    //Moore's Vote Algorithm

    int i, j, k;
    int n = arr.size();

    int count1 = 0, count2 = 0, first = INT_MAX, second = INT_MAX;

    for (i = 0; i < n; i++)
    {
        if (arr[i] == first) count1++;
        else if (arr[i] == second) count2++;
        else if (count1 == 0) {
            count1++;
            first = arr[i];
        }
        else if (count2 == 0) {
            count2++;
            second = arr[i];
        }

        else {
            count1--;
            count2--;
        }
    }
    count1 = 0;
    count2 = 0;

    for (i = 0; i < n; i++)
    {
        if (arr[i] == first) count1++;
        else if (arr[i] == second) count2++;
    }

    if (count1 > n / 3) return first;
    if (count2 > n / 3) return second;
    return -1;
}
