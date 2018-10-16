#include<stdio.h>
	// int z;//lai xuat cua nam
	// int so_nam; 
	// int x = 1;//tien minh co
	// int y;//tienminh muon co
	// int n;

// void nhapso(int x, int y, int z){
// 	printf("nhap so tien minh co:");
// 	scanf("%d",&x);
// 	printf("nhap so tien minh muon co:");
// 	scanf("%d",&y);
// 	printf("nhap lai xuat cua nam:");
// 	scanf("%d",&z);
// 	//return 0;
// }
void tinh_nam(int x,int y, int z, int n,int i){
	
	for (i=1; x<=y; i++){
		n=x*z/100;
		x=x+n;
	}
	printf("sau %d nam se co so tien : %3d\n", i, x);
}
int main(){
	int z;//lai xuat cua nam
	int i; 
	int x;//tien minh co
	int y;//tienminh muon co
	int n;
	printf("nhap so tien minh co:");
	scanf("%d",&x);
	printf("nhap so tien minh muon co:");
	scanf("%d",&y);
	printf("nhap lai xuat cua nam:");
	scanf("%d",&z);
	// nhapso(x,y,z);
	tinh_nam(x,y,z,n,i);
	return 0;
}