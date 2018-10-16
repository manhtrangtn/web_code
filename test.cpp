#include <stdio.h>
int main(int argc, char const *argv[])
{
	long long n=5;
	for (int i = 1; i < n; i++)
	{
		n*=i;
	}
	printf("n!=%lld\n", n);
	return 0;
}