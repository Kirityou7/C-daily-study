#include<iostream>
using namespace std;
int main()
{
	int n, i,min,a;
	cin >> n;
	cin >> a;
	min = a;
	for (i = 0; i < n-1; i++)
	{
		cin >> a;
		if (a < min)
			min = a;
	}
	cout << min;
	return 0;
}
