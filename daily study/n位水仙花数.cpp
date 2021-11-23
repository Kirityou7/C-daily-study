#include <iostream>
#include <math.h>
using namespace std;
int main()

{
	double n, x, y, f, b;
	cin >> n;
	x = pow(10, n - 1);
	y = pow(10, n);

	for (int i = x; i <= y; i++) {
		int p = i, res = 0;
		for (int j = 1; j <= n; j++) {
			b = p % 10;
			res += pow(b, n);
			p /= 10;
		}
		if (res == i)
			cout << i << endl;

	}
	return 0;
}
