#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int i, j, a, b, flag;
	int x[3][3], y[2][2];

	for  (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf("%d", &x[i][j]);
		}
	}
	

	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
			scanf("%d", &y[i][j]);
		}
	}

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf(" %d", x[i][j]);
		}
		printf("\n");
	}

	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf(" %d", y[i][j]);
		}
		printf("\n");
	}


	a = flag = 0;
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2 && flag == 0; j++)
		{
			if (x[i][j] == y[0][0] && x[i][j + 1] == y[0][1] &&
				x[i + 1][j] == y[1][0] && x[i + 1][j + 1] == y[1][1])
			 {
				printf("%d %d", i, j);
				flag = 1;
			}
		}
		
	}
	if (flag == 0) printf("none");
}