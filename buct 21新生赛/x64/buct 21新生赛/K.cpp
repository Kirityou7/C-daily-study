#include<iostream>
using namespace std;
int main()

{
	long long i, j, op[23333], tu = 0;
	long long t, dhp, atk[10], def[10], mag[10], ex[10], hp[10];
	cin >> dhp;
	for (i = 0; i < 5; i++)
		cin >> atk[i] >> def[i] >> mag[i] >> ex[i] >> hp[i];
	cin >> t;
	for (i = 0; i < t; i++)
		cin >> op[i];
	for (j = 0; j < t; j++)
	{
		switch (op[j])
		{
		case 1:
		{
			atk[0] += (mag[0] * 100);
			ex[0] += (ex[0] * 10);
			break;
		}
		case 2:
		{
			for (i = 0; i < 5; i++)
			{
				atk[i] += (1000 * mag[1]);
				def[i] += (1000 * mag[1]);
				hp[i] += (10 * mag[1]);
				ex[i] += mag[1];
			}
			break;
		}
		case 3:
		{
			for (i = 0; i < 5; i++)
				mag[i] += 10;
			mag[2] += 90;
			break;
		}
		case 4:
		{
			for (i = 0; i < 5; i++)
				hp[i] += (1000 * mag[3]);
			break;
		}
		case 5:
		{
			tu++;
			break;
		}
		}
	}
	for (i = 0; i < 5; i++)
		hp[i] -= (20211127 - 1000 * def[i]);
	for (i = 0; i < 5; i++)
	{
		if (hp[i] > 0)
		{
			switch (i)
			{
			case 0:
			{
				dhp -= (atk[0] * ex[0] * 10);
				break;
			}
			case 1:
			{
				dhp -= (atk[1] * ex[1]);
				break;
			}
			case 2:
			{
				dhp -= (mag[2] * ex[2] * ex[2]);
				break;
			}
			case 3:
			{
				dhp -= def[3];
				break;
			}
			case 4:
			{
				dhp -= (tu * mag[4]);
				tu = 0;
				break;
			}
			}
		}
	}

	if (dhp <= 0)
		cout << "I will ak this simple contest";
	else if (dhp > 0)
		cout << "Why this simple simulation so hard";
	return 0;
}