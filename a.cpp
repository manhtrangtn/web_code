#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
	int *p;
	p=(int*)malloc(10*sizeof(int));
	for (int i = 0; i < 10; ++i)
	{
		printf("Nhập phần tử thứ %d :\n", i);
		scanf("%d", p+i); //lúc nhập vào thì lược bỏ dấu sao hoặc sử dụng dấu & như bình thường
	}
	for (int i = 0; i < 10; ++i)
	{ 
		if (*(p+i)%2!=0){ //khi in ra hoặc sử dụng con trỏ bắt buộc phải có dấu *
			printf("%d là số lẻ!\n", *(p+i));
		}
	}
}