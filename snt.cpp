#include <stdio.h>

int main(){
	int n;
	A: printf("Nhập n:");
	scanf("%d", &n);
	int a=0;
	for (int i = 2; i < n; ++i)
	{
		if (n%i==0){
			a++;}

	} 
	if (a == 0){
		printf("Là số nguyên tố.\n");
	} 
	else {
		printf("Không phải số nguyên tố.\n");
	}

	goto A;
}