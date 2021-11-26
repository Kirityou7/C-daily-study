#include<iostream>
using namespace std;
int main()
{
	int n, l, r,max=0;
	cin >> n >> l >> r;
	if (l < n)
		cout << l;
	else	
		for (int i = l; i <= r; i++)
		{
			if ((i%n) > max)
				max = (i%n);
		}
	
cout << max;
	return 0;
}