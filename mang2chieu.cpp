#include <stdio.h>
int main(int argc, char const *argv[])
{
	int ar[2][5];
	for (int i = 0; i < 2; ++i)
	{
		for (int j = 0; j < 5; ++j)
		{
			printf("nhập Ar[%d][%d]\n", i,j);
			scanf("%d", &ar[i][j]);
		}
	}
	for (int i = 0; i < 2; ++i)
	{
		for (int j = 0; j < 5; ++j)
		{
			printf("%d ", ar[i][j]);
		} printf("\n");
	}

	return 0;
}