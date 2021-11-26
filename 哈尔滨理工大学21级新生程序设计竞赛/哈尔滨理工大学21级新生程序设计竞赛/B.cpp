#include<iostream>
using namespace std;
int main()
{
	long long n, a,flag=0,yu;
	cin >> n >> a;
	while (a -5>= 0)
	{
		a-=5;
		flag++;
	}
	if (flag > n)
	{
		a += (flag - n) * 5;
		cout << n << " " << a;
	}
	else
		cout << flag << " " << a;
	return 0;
}