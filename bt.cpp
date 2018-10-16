#include <stdio.h>
int main(int argc, char const *argv[])
{
	printf("Nhập tháng:\n");
	scanf("%d", n);
	switch (n){
		case 1,3,5,7,8,9,11,12: printf("Tháng %d có 31 ngày!\n", n);
		case 2: printf("Tháng %d có 28/29 ngày!\n", n );
		default: printf("Tháng %d có 30 ngày!\n", n);
	}
	return 0;
}