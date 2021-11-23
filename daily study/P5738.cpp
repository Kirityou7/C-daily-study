#include<iostream>
#include<iomanip>
using namespace std;
int imax(int i, int m, int a[][20])
{

	int j,max=a[i][0],fl=0;
	for (j = 0; j < m; j++)
	{
		if (a[i][j] > max)
		{
			max = a[i][j];
			fl = j;
		}
	}
	return fl;
}
int imin(int i, int m, int a[][20])
{

	int j, min = a[i][0], fl=0;
	for (j = 0; j < m; j++)
	{
		if (a[i][j] < min)
		{
			min = a[i][j];
			fl = j;
		}
	}
	return fl;
}
void swap(int* a, int* b)
{
	int t = *a;
	*a = *b;
	*b = t;
}
int main()
{
	int n, m, a[100][20], i, j, ma, mi, sum[100] = {0}, f;
	float ave[100] = { 0.0 },maxx;
	cin >> n >> m;
	for (i = 0; i < n; i++)
		for (j = 0; j < m; j++)
			cin >> a[i][j];
	for (i = 0; i < n; i++)
	{
		ma=imax(i,m,a);
		mi = imin(i,m, a);
		a[i][ma] = 0;
		a[i][mi] = 0;
		for (j = 0; j < m; j++)
		{
			sum[i] += a[i][j];
		}
	}
	for (i = 0; i < n; i++)
		ave[i] = sum[i] * 1.0 / (m - 2);
	maxx = ave[0];
	for (i = 0; i < n ; i++)
		if (ave[i]>maxx)
				maxx=ave[i];
	cout << fixed << setprecision(2) <<maxx;
	return 0;
}