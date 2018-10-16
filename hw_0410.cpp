// viết 4 hàm +-*/
// in ra kết quả#
#include <stdio.h>
#include <stdlib.h>
void input(int *a, int *b, int *n){
	printf("nhập a và b:"); //nhập hai số
	scanf("%d%d", a,b);
	printf("Nhập các số 1,2,3,4 tương ứng +,-,x,/:\n"); //chọn phép tính
	scanf("%d", n);
}
void add(int a, int b){
	printf("Tổng của a và b là: %3d\n", (a+b));
}
void sub(int a, int b){
	printf("Hiệu của a và b là: %3d\n", (a-b));
}
void mul(int a, int b){
	printf("Tích của a và b là: %3d\n", (a*b));
}
void mod(float a, float b){
	printf("Thương của a và b là: %3f\n", (a/b));
}
int main(int argc, char const *argv[])
{
	A: int a,b,n=0;
	char slt[10];
	input(&a,&b,&n);
	switch(n){
		case 1: add(a,b); goto B;
		case 2: sub(a,b); goto B;
		case 3: mul(a,b); goto B;
		case 4: mod(a,b); goto B;
	}
	B: printf("Thử lại? y/n: "); //thử lại hoặc thoát
	scanf("%s", slt);
	switch(*slt){
		case 'y': goto A;
		case 'n': return 0;
		default: goto B;
	}
}

