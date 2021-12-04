#include<iostream>
#include<math.h>
using namespace std;
bool pr(int n)
{
	int i;
	if (n == 2)
		return true;
	else if (n == 1)
		return false;
	else
	{
		for (i = 2; i <=sqrt(n); i++)
		{
			if (n % i == 0)
				return false;
		}
	}
	return true;
		
}
int main()
{
	int n;
	int i, j;
	cin >> n;
	for (i = n+1; ; i++)
	{
		if (pr(i))
		{
			cout << i;
			break;
		}
	}
	return 0;

}