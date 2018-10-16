#include <stdio.h>

long snt(int n){
	for (int i=2; i<=n-1; n++){
	 	if (n%i==0)
	return 1;;
	}
	return 0;
}int main(){
	int n;
	n=5;
	if (snt(n)==1){
		printf ("So nguyen to");
	} else {printf("khong phai so nguyen to\n");}
}