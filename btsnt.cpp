#include <stdio.h>
int main(int argc, char const *argv[])
{
	int m1[10];
	for (int i = 0; i <= 10; ++i)
	{
		printf("Nhập số thứ%d\n", i);
		scanf("%d", &m1[i]);
	}
	for (int i = 0; i < 10; ++i)
	{
		int a=0;
		for (int j = 2; j < m1[i]; ++j)
		{
			if (m1[i]%j==0){
				a++;
			}
		}
		if (a==0){
			printf("%d là số nguyên tố\n", m1[i] );
		}
		else {
			printf("%d không phải số nguyên tố\n", m1[i]);
		}
	}
	return 0;
}