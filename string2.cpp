#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
	char A[10];
	printf("Nhập chuỗi:");
	scanf("%s", A);
	printf("Chuỗi ngược lại của %s là: ", A);
	for (int i = (strlen(A)-1); i >= 0; --i)
	{
		printf("%c", A[i]);
	} printf("\n");
	return 0;
}