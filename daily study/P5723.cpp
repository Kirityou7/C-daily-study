#include<iostream>
#include<math.h>
using namespace std;
int pr(int a)
{
	if (a == 1)
		return 0;
	if (a == 2)
		return 1;
	int i;
	for  (i = 2; i <=sqrt(a); i++)
	{
		if (a % i == 0)
			return 0;
	}
	return 1;
}
int main()
{
	int l,j,flag=0,sum=0;
	cin >> l;
	for (j = 2; j <= l; j++)
	{
		
		if (pr(j)==1)
			if(sum+j<=l)
			{
				cout << j << endl;
				sum += j;
				flag++;
			}
	}	
	cout << flag;
	return 0;
}