#include<iostream>
using namespace std;
int main()
{
	int n; 
	cin >> n;
	cout << "You were ";
	switch (n)
	{
	case 1:cout << "studying Higher mathematics!"; break;
	case 2:cout << "studying Linear algebra!"; break;
	case 3:cout << "studying Principle of computer composition!"; break;
	case 4:cout << "studying Database system concept!"; break;
	case 5:cout << "were playing games!"; break;
	}
	return 0;
}