#include <stdlib.h>
#include <stdio.h>
int main(int argc, char const *argv[])
{
	int A[4][5];
	for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < 5; ++j)
		{
			printf("Nhập phần tử A[%d][%d] của ma trận:", i,j);
			scanf("%d", A[i]+j);
		}
	}
	for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < 5; ++j)
		{
			if (i==0||i==2){
				*(A[i]+j)*=2;
			} else if(i==1||i==3){
				*(A[i]+j)/=2;
			}
		}
	}
	printf("\t\n");
	for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < 5; ++j)
		{
			printf("%4d", *(A[i]+j));
		}
		printf("\n");
	}
	return 0;
}