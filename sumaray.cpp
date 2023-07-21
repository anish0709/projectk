#include <stdio.h>
int main()
{

	int a[3][3], sum, k = 0;
	for (int y = 0; y < 3; y++)
	{
		for (int n = 0; n < 3; n++)
		{
			scanf("%d", &a[n][y]);
		}
	}

	for (int y = 0; y < 3; y++)
	{
		k = 0;
		for (int n = 0; n < 3; n++)
		{
			printf(" %d", a[n][y]);
			k = k + a[n][y];
		}
		printf(" => %d", k);
		printf("\n");
	}

	for (int y = 0; y < 3; y++)
	{
		sum = 0;
		for (int n = 0; n < 3; n++)
		{
			sum = sum + a[y][n];
		}
		printf(" %d", sum);
	}
}
