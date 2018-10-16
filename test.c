#include <stdio.h>
#include <iostream>
void input(int *n)
{
	printf("Enter n:");
	scanf("%d", n);
}
long long giaithua(int x)
{
	if (x<=1){
		return 0;
	}
	return (giaithua(x-1))*x;
}
int main()
{
	int *a,N=0;
	input(a);
	for (int i = 0; i < *a; ++i)
	{
		printf("%d! = %lld\n", a,giaithua(a));
	}
	return 0;
}