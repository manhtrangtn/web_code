#include <stdio.h>
#include <stdlib.h>
void nhap(int *X, int n){
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			printf("Nhập số %d%d:\t", i,j);
			scanf("%d", (X+i*n+j));
		}
	}
}
void nhan(int *A,int *B,int *C, int n){
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			for (int k = 0; k < n; ++k)
			{
				(*(C+i*n+k))+=(*(A+i*n+j))*(*(B+j*n+k));
			}
		}
	}
}
void out(int *C,int n){
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			printf("%3d", *(C+i*n+j));
		}
		printf("\n");
	}
}
int main(int argc, char const *argv[])
{
	int *A,*B,*C,n;
	printf("Nhập n:");
	scanf("%d",&n);
	A=(int*)calloc(n*n, sizeof(int));
	B=(int*)calloc(n*n, sizeof(int));
	C=(int*)calloc(n*n, sizeof(int));
	nhap(A,n);
	nhap(B,n);
	nhan(A,B,C,n);
	out(C,n);

	return 0;
}