#include <stdio.h>
int main(int argc, char const *argv[])
{
	int m1[10];
	int i,hg;
	for (i=0; i<=10; i++){
		printf("nhập số thứ %d:\n", i);
		scanf("%d", &m1[i]);
	}
	hg=m1[0];
	for (i = 0; i <= 10; i++)
	{
		if (m1[i]>hg){
			hg=m1[i];
		}
	}
	printf("số lớn nhất là:%5d\n", hg);
	return 0;
}