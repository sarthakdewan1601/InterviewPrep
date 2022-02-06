# Codeforces Round #770 (Div. 2)

Link - https://codeforces.com/contest/1634

* It was a tough round for me, I managed to do just one question on time.
* I could have cracked the third question, but I wasn't able to understand the question properly.
* I think I need to practice more than actually going onto a contesting platform right now.
* I wish to improve more and I will try my best next time.
* Will get my rating down this time but it's okay :))
* My rating goes down for 2 contest then go up for 3.
* So I am happy right now in my space competing with people like me.
* Not getting demotivated at all and trying my best again and again.
* Rating change - ```diff -1091 &rarr; 1030```

<br>
<br>

### QUESTIONS SOLVED - 
<br>

**Q1 (Reverse and Concatenate)**

<br>

Code -
<br>
```
void solve()
{
	int i, j, k;
	int n;
	cin >> n >> k;
	string s;
	cin >> s;
	if (k == 0)
	{
		cout << 1 << endl;
		return;
	}
	string temp = s;
	reverse(s.begin(), s.end());
	if (temp == s)
	{
		cout << 1 << endl;
		return;
	}
	// set<string> s;
	cout << 2 << endl;
	return;
}
```
Approach -
<br>
Simple approach. Just reversed the string and checked if it is palindrome or not, if the string is palindrome, answer is always equal to 1, if it is not then answer is always 2.


<br>

**Q3 (OKEA)**

* Didn't solve this question during the contest, could have, but it's okay.
* Great constructive problem

Code - 
```
void solve()
{
	int i, j, k;
	int n;
	cin >> n >> k;
	int arr[n][k];
	int num = 1;
	if (k == 1)
	{
		cout << "YES" << endl;
		for (i = 0; i < n; i++)
		{
			cout << i + 1 << endl;
		}
		return;
	}
	else if (n % 2 == 0 && k >= 2)
	{
		cout << "YES" << endl;
		for (j = 0; j < k; j++)
		{
			for (i = 0; i < n; i++)
			{
				arr[i][j] = num;
				num++;
			}
		}
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < k; j++)
			{
				// arr[i][j] = num;
				// num++;
				cout << arr[i][j] << " ";
			}
			cout << endl;
		}
	}
	else
	{
		cout << "NO" << endl;
	}
}
```
Approach -
<br>
* k = 1, always answer exists
* k >= 2, answer exists only when n%2 == 0, otherwise answer is NO



***Cheers!***
