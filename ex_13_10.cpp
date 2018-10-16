#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
	float a,b,c,p,s;
	printf("Input a:");
	scanf("%f", &a);
	printf("Input b:");
	scanf("%f", &b);
	printf("Input c:");
	scanf("%f", &c);
	if (a==0||b==0||c==0)
	{
		printf("Not is a triangle!\n");
	} else {
	p=((a+b+c)/2);
	s=sqrt(p*(p-a)*(p-b)*(p-c));
	printf("Area of the triangle is: %3g\n", s);
	}
	return 0;
}