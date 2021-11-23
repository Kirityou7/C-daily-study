#include <iostream>
#include <math.h>
using namespace std;

bool pr(int m) {
	if(m==1)
		return 0;
	for (int i = 2; i <= m / 2; i++) {
		if (m % i == 0)
			return 0;
	}
	return 1;
}
int main()

{
	int n;
	cin >> n;
	for (int i = n; i >= 2; i--) {
		if (pr(i)) {
			for (int j = 1; j <= n; j++)
				if (pr(j)) {

					if (i + j == n) {
						cout << n << "=" << j << "+" << i;
						return 0;
					}
				}
		}
	}

}
