#include <stdio.h>
int main(int argc, char const *argv[])
{

	int n,x;
	printf("Nhập độ rộng của ma trận:\t");
	scanf("%d", &n);
	int A[n][n], B[n][n],C[n][n];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("Nhập vào các phần tử của ma trận 1:\t");
	 		scanf("%d", &A[i][j]);
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("Nhập vào các phần tử của ma trận 2:\t");
	 		scanf("%d", &B[i][j]);
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++) 
		{
			for (int g = 0; g < n; g++)
			{
				C[i][g]+=A[i][j]*B[j][g];
			}
		}
	}

	printf("Tích của hai ma trận trên là:\n");
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{			
			printf("%3d\t", C[i][j]);
		}
		printf("\n");
	}
	return 0;
}