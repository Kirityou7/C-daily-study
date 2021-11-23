#include <iostream>
using namespace std;

int main() {
	int a[10], l, temp, res;
	cin >> l;
	a[0] = l % 10;
	a[1] = (l / 10) % 10;
	a[2] = l / 100;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2 - i; j++) {
			if (a[j] < a[j + 1]) {
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
	res = a[0] * 100 + a[1] * 10 + a[2];
	cout << res;
	return 0;

}