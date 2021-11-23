#include <iostream>
using namespace std;

int main() {
	int a, b, c, n = 0;
	cin >> a >> b >> c;
	if (a - b == 1 || a - b == -1)
		n++;
	if (a - c == 1 || a - c == -1)
		n++;
	if (b - c == 1 || b - c == -1)
		n++;
	if (n == 2)
		cout << "TRUE";
	else
		cout << "FALSE";
	return 0;
}