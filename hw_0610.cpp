//nhập hai chuỗi 1 và 2;
//nếu 1>2 in ra chuỗi ghéo 1-->2 và ngược lại
#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
	char A[50],B[50];
	printf("Nhập vào chuỗi B:");
	scanf("%s", A);
	printf("Nhập vào chuỗi A:");
	scanf("%s", B);
	if (strlen(A)>strlen(B)){
		strcat(B,A);
		printf("Chuỗi dài hơn là: %s\n", A);
		printf("Chuỗi sau khi ghép là: %s\n", B);
	}else if (strlen(A)<strlen(B)){
		strcat(A,B);
		printf("Chuỗi dài hơn là: %s\n", B);
		printf("Chuỗi sau khi ghép là:%s\n", A);
	}
	return 0;
}