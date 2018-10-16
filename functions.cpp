// nhập 10 số từ bàn phím, in ra các số lẻ. dùn hàm
#include <stdio.h>
#include <stdlib.h>
void nhap(int *A){
	for (int i = 0; i < 10; ++i)
	{
		printf("Nhập số A[%d]:", i);
		scanf("%d", A+i);
	}
}
void tinh(int *A){
	printf("các số lẻ là:");
	for (int i = 0; i < 10; ++i)
	{
		if (A[i]%2!=0){
				printf("%3d", A[i]);		}
	}
}
int main(int argc, char const *argv[])
{
	int *A;
	A=(int*)calloc(10, sizeof(int));
	nhap(A);
	tinh(A);
	return 0;
}