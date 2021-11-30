//法一
#include<iostream>
using namespace std;
int main()
{
	int n, a[1000], i, j, x = 1;
	cin >> n;
	cin >> a[0];
	for (i = 1; i < n; i++)
	{
		cin >> a[i];
		if (a[i] < a[i - 1])
		{
			x = 0;
			for (j = i + 1; j < n; j++)
			{
				cin >> a[j];
				if (a[j] < a[j - 1])
				{
					cout << "NO";
					return 0;
				}
			}
			break;
		}

	}
	if (x)
		cout << "YES";
	else
	{
		if (a[0] < a[n - 1])
			cout << "NO";
		else
			cout << "YES";
	}
	return 0;
}
//法二
/*
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int n,i,j;
	cin >> n;
	vector<int> a(n), b(n),c(n);
	for (i = 0; i < n; i++)
	{
		cin >> a[i];
		c[i] = a[i];
	}
	sort(c.begin(), c.end());
	for (i = 0; i < n; i++)
	{
		b.clear();
		b.insert(b.end(), a.begin() + i, a.end());
		b.insert(b.end(), a.begin(), a.begin() + i);
		if (b == c)
		{
			cout << "YES";
			return 0;
		}
	}
	cout << "NO";
	return 0;
}
*/