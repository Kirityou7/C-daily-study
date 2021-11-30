#include<iostream>
using namespace std;
int main()
{
	int n, m;
	cin >> n;
	while (n!=0)
	{
		n--;
		cin >> m;
		if (m == 1)
			cout << "YES"<<endl;
		else 
			cout << "NO"<<endl;

	}
	return 0;

}