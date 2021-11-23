#include<iostream>
using namespace std;
int main()
{
	int n, x, k=1,i;
	cin >> n;
	while (1)
	{
		for (i = 100; i >= 1; i--)
		{
			if ((7 * i + 21 * k) * 52 == n)
			{
				x = i;
				cout << x << endl;
				cout << k << endl;
				return 0;
			}
		}
		k++;
	}
	return 0;
}