#include <stdio.h>
int main(int argc, char const *argv[])
{
	int a,b,m;
	printf("nhap a,b:%d %d", a,b);
	scanf("%d %d", &a,&b);
	(m=a<=b? a*b:a/b);
	printf("a,b:\t%d\n", m);
	return 0;
}