#include <stdio.h>
int main(int argc, char const *argv[])
{
	int n,x=0;
	n=15;
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		printf("nhap a[%d]", i);
		scanf("%d", &a[i]);
	}
	
	for (int i = 0; i < n-1; ++i)
	{ 
		for (int j = 0; j < n-i-1; ++j)
		{
			if (a[j]>a[j+1]){
				x=a[j];
				a[j]=a[j+1];
				a[j+1]=x;
			}
		}
	}
	for (int i = 0; i < n; ++i)
	{
		printf("%3d\n", a[i]);
	}
	return 0;
}
