# Codeforces Global Round 19


Link - https://codeforces.com/contest/1637

* Great round for me.
* Solved 3 questions at a good speed.
* Rating was increased by +117, yay!
* I need to practice more tho. 

<br>
<br>

### QUESTIONS SOLVED - 
<br>

**Q1 (Sorting Parts)**

<br>

Code -
<br>
```
void solve()
{
	int n, i, j, k;
	cin >> n;
	int arr[n];
	int sorted[n];
	for (i = 0; i < n; i++)
	{
		cin >> arr[i];
		sorted[i] = arr[i];
	}
	sort(sorted, sorted + n);
 
	for (i = 0; i < n; i++)
	{
		if (arr[i] != sorted[i])
		{
			cout << "YES" << endl;
			return;
		}
	}
	cout << "NO" << endl;
	return;
}
```
Approach -
<br>
Simple approach. Just checked if the array is already sorted or not.


<br>

**Q2 (MEX and Array)**

* Conceptual Question
* Took a little time but brute force of O(n<sup>3</sup>) worked.
* Concept used - Sliding window and some observations.

Code - 
```
void solve()
{
	int n, i, j, k;
	cin >> n;
	int arr[n];
	for (i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	int ans = 0;
	for (int ws = 1; ws <= n; ws++)
	{
		for (i = 0; i + ws <= n; i++)
		{
			// cout << arr[i] << endl;
			ans += ws;
			for (j = i; j < i + ws; j++)
			{
				if (arr[j] == 0) ans++;
			}
		}
		// cout << ans << endl;
	}
	cout << ans << endl;
}
```

**Q3 (Andrew and Stones)**

* Conceptual Question
* Took a lot of time overthinking, but finally it was a simple question for C.
* Time complexity - O(n)

Code - 

```
void solve()
{
	int n, i, j, k;
	cin >> n;
	int arr[n];
	for (i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	int even = 0, odd = 0;
	bool check = false;
	for (i = 1; i < n - 1; i++)
	{
		if (arr[i] % 2 == 0)
		{
			even++;
		}
		else odd++;
		if (arr[i] % 2 != 0 && arr[i] > 1)
		{
			check = true;
		}
	}
	int ans = 0;
	if (n == 3 && odd == 1)
	{
		cout << -1 << endl;
		return;
	}
	if (odd == n - 2 && check == false)
	{
		cout << -1 << endl;
		return;
	}
	for (i = 1; i < n - 1; i++) {
		if (arr[i] % 2 == 0)ans += arr[i] / 2;
		else ans += (arr[i]) / 2;
	}
	cout << ans + odd << endl;
}
```



***Cheers!***
