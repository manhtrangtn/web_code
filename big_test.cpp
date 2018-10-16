//Nhập m và n; 
// Nhập A[m][n]; 
//thêm 1 hàng cho ma trận rồi in ra A[m+1][n];
//in ra ma trận chuyển vị của A[][];
//====================================CODE===============================================//
//creat a matrix;
#include <stdio.h>
#include <stdlib.h>
void sign(){
	printf("\n\n");
	printf("\t" );
	for (int i = 0; i < 37; ++i)
	{ 
		printf("//");
	}
	printf("\n\n");
	
	for (int i = 1; i <= 2; i++)
	{
		printf("\t" );
		for (int j = 1; j <=33; j++)
		{
			for (j = 1; j <= 9; j++)
			{
				printf("01"); //continue;
			} printf("  ");
			for (j=12; j<=21; j++)
			{
				printf("10"); //continue;
			}printf("  ");
			for (j=24; j<=33; j++){
				printf("01"); 
			} printf("  ");
		}printf("\n");

	}
	for (int i = 1; i <= 2; i++)
	{ printf("\t" );
		for (int j = 1; j <=33; j++)
		{
			for (j = 1; j<=3; j++)
			{
				printf("  ");
			}
			for (j = 4; j <= 6; j++)
			{
				printf("10"); 
			} 
			for (j = 8; j <= 11; j++)
			{
				printf("  "); 
			}
			for (j=12; j<=13; j++)
			{
				printf("01"); 
			}
			for (j = 15; j <= 20; j++)
			{
				printf("  "); 
			}

			for (j=19; j<=20; j++)
			{
				printf("10"); 
			}
			for (j = 25; j <=25; j++)
			{
				printf("  "); 
			}
			for (j=26; j<=27; j++){
				printf("11"); 
			} 
			for (j = 28; j <= 33; j++)
			{
				printf("  "); 
			}
			for (j=31; j<=32; j++)
			{
				printf("01"); 
			}printf("  ");
		}
		printf("\n");
	}
	for (int i = 1; i <= 2; i++)
	{ printf("\t" );
		for (int j = 1; j <=33; j++)
		{
			for (j = 1; j<=3; j++)
			{
				printf("  ");
			}
			for (j = 4; j <=6 ; j++)
			{
				printf("01"); continue;
			} 
			for (j = 6; j<=9; j++)
			{
				printf("  ");
			}
			for (j=12; j<=21; j++)
			{
				printf("01"); continue;
			}printf("  ");
			for (j=24; j<=33; j++){
				printf("10"); continue;
			} printf("  ");
		}printf("\n");

	}
	for (int i = 1; i <= 2; i++)
	{ printf("\t" );
		for (int j = 1; j <=33; j++)
		{
			for (j = 1; j<=3; j++)
			{//T
				printf("  ");
			}
			for (j = 4; j <= 6; j++)
			{
				printf("10"); 
			} 
			for (j = 8; j <= 11; j++)
			{
				printf("  "); 
			}//R
			for (j=12; j<=13; j++)
			{
				printf("01"); 
			}
			for (j = 15; j <= 17; j++)
			{
				printf("  "); 
			}

			for (j=16; j<=17; j++)
			{
				printf("00"); 
			}//A
			for (j = 22; j <=25; j++)
			{
				printf("  "); 
			}
			for (j=26; j<=27; j++){
				printf("01"); 
			} 
			for (j = 28; j <= 33; j++)
			{
				printf("  "); 
			}
			for (j=31; j<=32; j++)
			{
				printf("10"); 
			}printf("  ");
		}
		printf("\n");
	}
		for (int i = 1; i <= 2; i++)
	{ printf("\t" );
		for (int j = 1; j <=33; j++)
		{
			for (j = 1; j<=3; j++)
			{//T
				printf("  ");
			}
			for (j = 4; j <= 6; j++)
			{
				printf("01"); 
			} 
			for (j = 8; j <= 11; j++)
			{
				printf("  "); 
			}//R
			for (j=12; j<=13; j++)
			{
				printf("10"); 
			}
			for (j = 15; j <= 17; j++)
			{
				printf("  "); 
			}

			for (j=16; j<=20; j++)
			{
				printf("01"); 
			}//A
			for (j = 25; j <=25; j++)
			{
				printf("  "); 
			}
			for (j=26; j<=27; j++){
				printf("01"); 
			} 
			for (j = 28; j <= 33; j++)
			{
				printf("  "); 
			}
			for (j=31; j<=32; j++)
			{
				printf("10"); 
			}printf("  ");
		}
		printf("\n");
	}
	printf("\n");
	printf("\t" );
	printf("P\tH\tO\tT\tO\tG\tR\tP\tH\tY\n\n");
	printf("\t" );
	for (int i = 0; i < 74; ++i)
	{ 
		printf("\\");
	}
	printf("\n\n\n");//my sign
}
void line(int count){//make a line, user input length from keyboard
	for (int i = 0; i < count; ++i)
	{
		printf("-"); //print a line by "-"
	}printf("\n");
}
void in_n_m(int *m,int *n){ //input the matrix of height and length 
	printf("Nhập số hàng của ma trận:");
	scanf("%d", m);//read to m for length
	printf("Nhập số cột của ma trận:");
	scanf("%d", n);//read to n for height
}
void in_A(int *A, int m, int n){ //input to A[][] array
	for (int i = 0; i < m; ++i) //row
	{
		for (int j = 0; j < n; ++j) //collumn
		{
			printf("Nhập phần tử thứ A[%d][%d]:", i,j);
			scanf("%d", (A+i*n*m+j)); //input one by one data to A 
		}
	}
}
void solve_add_line(int *A,int m,int n){ //via ex. add one more line to the matrix
	int i=m;
		for (int j = 0; j < n; ++j)
		{
			printf("Nhập phần tử thứ A[%d][%d]:", i,j); //add data to the added line;
			scanf("%d", (A+i*n*m+j));
		}
	line(30); //draw a line with 30 "-"
}
void out_added_line(int *A,int m,int n){ // output array A[][] (include added line)
	printf("Ma trận sau khi tăng 1 hàng là:\n");
	line(30);
	for (int i = 0; i <= m; i++)
	{
		for (int j = 0; j < n; ++j)
		{
			printf("\t%3d", *(A+i*n*m+j)); 
		} printf("\n");
	}
}
void solve_transpose(int *A,int m,int n,int tmp){ //solve transpose the matrix (m++ of matrix)
	for (int i = 0; i <= m; ++i)
	{
		for (int j = 0; j < i; ++j)
		{
			tmp=(*(A+i*n*m+j)); //put A's data to temp;
			(*(A+i*n*m+j))=(*(A+j*n*m+i)); //transpose A[i][j] of data to A[j][i];
			(*(A+j*n*m+i))=tmp; //put A[j][i] to temp;
		} //this solve wil transpose A's data from row to collumn and gainsay;
	}
}
void out_transpose(int *A,int n,int m){ //output transposed data;
	printf("\n\nChuyển vị của ma trận trên:\n"); line(30);//draw a line
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j <= m; ++j)
		{
			printf("\t%3d", *(A+i*n*m+j));
		} printf("\n");
	}
}
int main(int argc, char const *argv[]) //main function;
{
	int *A,n,m,tmp;
	in_n_m(&m,&n);line(30);
	A=(int*)calloc(m*n,sizeof(int));
	in_A(A,m,n);
	line(30); 
	printf("Tăng lên 1 hàng:\n"); line(30);
	solve_add_line(A,m,n);line(30);
	out_added_line(A,m,n); line(30);
	solve_transpose(A,m,n,tmp);
	out_transpose(A,n,m);line(100);line(100);printf("\n");
	sign();
	return 0;
} //DONE
//06/10/2018