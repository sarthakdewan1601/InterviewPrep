#include<bits/stdc++.h>

bool allare9(string s)
{
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != '9')
        {
            return false;
        }
    }
    return true;
}

string helper(string s, int n)
{
    int mid = n / 2;
    bool leftsmaller = false;
    int i = mid - 1;
    int j = (n % 2) ? mid + 1 : mid;
    while (i >= 0 && s[i] == s[j])
    {
        i--;
        j++;
    }

    if (i < 0 || s[i] < s[j])
    {
        leftsmaller = true;
    }

    while (i >= 0)
    {
        s[j] = s[i];
        j++;
        i--;
    }
    if (leftsmaller == true)
    {
        // cout<<"hi"<<endl;
        int carry = 1;
        i = mid - 1;

        if (n % 2 == 1)
        {
            // cout<<"hi"<<endl;
            int temp = int(s[mid] - '0');
            temp += carry;
            carry = temp / 10;
            temp = temp % 10;
            j = mid + 1;
            s[mid] = char(temp + '0');
        }
        else
        {
            // cout<<"hi"<<endl;
            j = mid;
        }
        while (i >= 0)
        {
            int temp = int(s[i] - '0');
            // cout<<temp<<endl;
            temp += carry;
            carry = temp / 10;
            temp %= 10;
            s[i] = char(temp + '0');
            // cout<<s[i]<<endl;
            s[j++] = s[i--];
        }
    }
    return s;
}

string Solution::solve(string s) {
    int i, j, k;
    int n = s.size();
    string ans = "";

    if (allare9(s) == true)
    {
        ans.push_back('1');
        for (i = 0; i < n - 1; i++)
        {
            ans.push_back('0');
        }
        ans.push_back('1');
        return ans;
    }

    ans = helper(s, n);
    return ans;
}
