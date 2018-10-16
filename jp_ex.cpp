#include <stdio.h>
int main(int argc, char const *argv[])
{
	int n;
	printf("Input n:");
	scanf("%d", &n);
	if (n<50){
		printf("運賃は　300円です。\n");
	} else if (n>=50&&n<100){
		printf("運賃は　500円です。\n");
	} else if (n>=100&&n<500){
		printf("運賃は　700円です。\n");
	} else if (n>=500){
		printf("運賃は　1000円です。\n");
	} 
	return 0;
}