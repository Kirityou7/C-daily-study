#include <iostream>
#include <string.h>
using namespace std;

int main() {
	int len;
	char s[23333], a;
	while (gets(s)) {
		len = strlen(s);
		if (s[0] >= 'a' && s[0] <= 'z')
			s[0] -= 32;
		for (int i = 0; i < len; i++)
			if (s[i] == ' ' && s[i + 1] >= 'a' && s[i + 1] <= 'z')
				s[i + 1] -= 32;
		puts(s);
		if (a = getchar() == '\n')
			break;
	}


	return 0;
}
