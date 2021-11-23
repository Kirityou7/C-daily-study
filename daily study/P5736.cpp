#include<iostream>
#include<math.h>
using namespace std;
bool pr(int x)
{
	int i;
	if (x == 1)
		return false;
	if (x == 2)
		return true;
	for (i = 2; i <= sqrt(x); i++)
		if (x % i == 0)
			return false;
	return true;
}
int main()
{
	int n,i,j,a[100];
	cin >> n;
	for (i = 0; i < n; i++)
		cin >> a[i];
	for (i = 0; i < n; i++)
	{
		if (pr(a[i]))
			cout << a[i] << " ";
		else
			continue;
	}
	return 0;
}