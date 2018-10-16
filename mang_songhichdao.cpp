#include <stdio.h>
int main(int argc, char const *argv[])
{
	int m[10], b;
	for (int i = 0; i <= 10; i++)
	{
		printf("Nhập số thứ %d:\n", i);
		scanf("%d", &m[i]);
	}
	for (int i = 0; i <= 10; i++)
	{
		int c=0;
		printf("Số nghịch đảo của %d là: ", m[i]);
		while (m[i]>0){
			b=m[i]%10;
			c=c*10+b;
			m[i]=m[i]/10;
		} printf(" %d\n", c);

	}
	return 0;
}