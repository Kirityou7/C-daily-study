#include<iostream>
using namespace std;
int main()
{
	int m, a,b;
	cin >> m >>a>> b;
	if (a > b)
	{
		int t = a;
		a = b;
		b = t;
	}
	int min = b - a;
	if (min >( m - b + a))
	{
		cout << m - b + a;
	}
	else
	{
		cout << min;
	}
	return 0;
}