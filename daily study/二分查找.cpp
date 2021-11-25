#include<iostream>
using namespace std;
int search(int a[], int key,int end)
{
	int sta = 0;
	int mid = (sta + end) / 2;
	while (sta <= end)
	{
		if (a[mid] > key)
			end = mid - 1;
		else if (a[mid] < key)
			sta = mid + 1;
		else if (a[mid] == key)
			return mid;
	}
	return -1;
}
int main()
{
	int a[2233];

	return 0;
}