#include <stdlib.h>
#include <stdio.h>
void in(int *A, int n, int m){
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{ 
			printf("Nhập phần tử thứ [%d][%d]:", i,j);
			scanf("%d", (A+i*m*n+j));
		}
	}
}
void solve_add(int *A,int *B,int *C,int n,int m){
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			(*(C+i*n*m+j))=(*(A+i*n*m+j))+(*(B+i*n*m+j)); // tôngr của hai ma trận bằng tổng ccác phần tử theo thứ tự.
		}
	}
}
void solve_sub(int *A,int *B,int *C,int n,int m){
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			(*(C+i*n*m+j))=(*(A+i*n*m+j))-(*(B+i*n*m+j));
		}
	}
}
void out(int *C, int n, int m){
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			printf("\t%3d", *(C+i*m*n+j));
		}
		printf("\n");
	}
}

int main(int argc, char const *argv[])
{
	int *A,*B,*C,n,m;
	A=(int*)calloc(n*m,sizeof(int));
	B=(int*)calloc(n*m,sizeof(int));
	C=(int*)calloc(n*m,sizeof(int));
	printf("Nhập số hàng của ma trận:");
	scanf("%d", &n);
	printf("Nhập số cột của ma trận:");
	scanf("%d", &m);
	in(A,n,m);
	in(B,n,m);
	printf("Tổng hai ma trận trên là:\n");
	solve_add(A,B,C,n,m);
	printf("Hiệu hai ma trận trên là:\n");
	solve_sub(A,B,C,n,m);
	out(C,n,m);
	return 0;
}