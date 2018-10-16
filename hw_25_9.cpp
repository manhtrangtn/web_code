#include <stdio.h>
void output(int co, int mu, int lai, int lax, int i){
	for (i=1; co<mu; i++){
		lai=co*lax/100;
		co=co+lai;
	}
	printf("\t\t\tSau %d năm sẽ được số tiền = %3d\n", i, co);
}
int main()
{
	int co,mu,lai,lax;
	int i;
	printf("\tNhập số tiền hiện có:\t");
	scanf("%d", &co);
	printf("\tNhập số tiền muốn có:\t");
	scanf("%d", &mu);
	printf("\tNhập lãi xuất/năm:\t");
	scanf("%d", &lax);
	output(co,mu,lai,lax,i);
	return 0;
}