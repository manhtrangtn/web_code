#include <stdio.h>
#include <stdlib.h>
void line(int count){
	for (int i = 0; i < count; ++i)
	{
		printf("-");
	}
	printf("\n");
}
void input_n(int *n){
	printf("Nhập n:");// chỉ những ma trận có số hàng và số cột bằng nhau mới có thể thực hiện phép nhân
	scanf("%d",n);
}
void in(int *X, int n){//hàm nhập dữ liệu vào ma trận
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			printf("Nhập số %d%d:\t", i,j);
			scanf("%d", (X+i*n+j));
		}
	}
}
void solve(int *A,int *B,int *C, int n){
	for (int i = 0; i < n; ++i) //vòng này là chỉ sô hàng của A và C
	{
		for (int j = 0; j < n; ++j) //vòng này là chỉ số cột của A, chỉ số hàng của B
		{
			for (int k = 0; k < n; ++k) //vòng này là số hàng của C và là số cột của B
			{
				(*(C+i*n+k))+=(*(A+i*n+j))*(*(B+j*n+k)); //không theo cách tính toán kiẻu toán học, 
														//hàm này sẽ chia ra số lần xuất hiện của mỗi phần tử trong phép nhân ma trận, 
			}											//mỗi số A được xuất hiện n lần, mỗi lần A xuất hiện B sẽ được xuất hiện n lần,
		}
	}
}
void out(int *C,int n){
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			printf("%7d", *(C+i*n+j));
		}
		printf("\n\n");
	}
}
int main(int argc, char const *argv[])
{
	int *A,*B,*C,n;
	input_n(&n);
	line(20);//draw a line
	A=(int*)calloc(n*n, sizeof(int));
	B=(int*)calloc(n*n, sizeof(int));
	C=(int*)calloc(n*n, sizeof(int));
	in(A,n);
	line(20); //draw a line
	printf("\tX\n");
	line(20);//draw a line
	in(B,n);
	solve(A,B,C,n);
	line(20);//draw a line
	printf("\nKẾT QUẢ:\n");
	line(50);//draw a line
	out(C,n);
	line(50);//draw a line
	return 0;
}