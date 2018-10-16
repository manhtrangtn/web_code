#include <stdio.h>
int main(int argc, char const *argv[])
{
	int A[4][5];
	for (int i = 0; i < 4; ++i)
	{
		for (int j= 0; j < 5; ++j)
		{
			printf("Nhập phần tử thứ %d%d của ma trận:", i,j);
			scanf("%d", &A[i][j]);
		}
		printf("----------------------------------------------\n");
		printf("\n");
	}
	for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < 5; ++j)
		{
			if (i==1||i==3){
				A[i][j]+=5;
			}
		}
	}
	printf("\n\n\nKẾT QUẢ:\n");
	printf("\n|--------------------------|\n");
	for (int i = 0; i < 4; ++i)
	{
		printf("\n");
		for (int j = 0; j < 5; ++j)
		{
			printf("%5d", A[i][j]);
		} 
		printf("\n");
	}
	printf("|＿＿＿＿＿＿＿＿＿＿＿＿＿|\n\n\n\n");
	return 0;
}