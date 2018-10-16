#include <stdio.h>
int main(int argc, char const *argv[])
{
	{
	A: int a, c, b;
	c=0;
	printf("\t\nNhập a:");
	scanf("%d", &a);
	printf("\nSố nghịch đảo của %d là:[", a);
	
	while (a>0)
	{
		b=a%10;
		c=c*10+b;
		a=a/10;
	}
	printf(" %d ]\n\n", c);
	}
		int e;
	printf("\nNhập 1 để thử lại, hoặc số bất kỳ để dừng chương trình:\t");
	scanf("%d", &e);
	if (e==1){
		goto A;
	} 
	else {return 0;}
}