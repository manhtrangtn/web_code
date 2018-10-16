#include <stdio.h>
int main(int argc, char const *argv[])
{
	long long x1=1,x2=1,x3=1;
	for (int i = 1; i < 20; ++i)
	{
		x1=x2;
		x2=x3;
		x3=x2+x1;
		printf("%lld\n", x3);
			}
	return 0;
}