#include <iostream>
#include <cstring>
using namespace std;

int main(void)
{
	int p, n, p1, n2,sum=0;

	cin >> p;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> p1 >> n2;
		sum +=(p1 * n2);
	}

	if (sum == p)
		printf("Yes");
	else
		printf("No");
	return 0;
}