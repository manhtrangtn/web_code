#include <stdio.h>
int main()
{
	{	printf("\n\n");
	printf("\t\t" );
	for (int i = 0; i < 37; ++i)
	{ 
		printf("//");
	}
	printf("\n\n");
	
	for (int i = 1; i <= 2; i++)
	{
		printf("\t\t" );
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
	{ printf("\t\t" );
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
	{ printf("\t\t" );
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
	{ printf("\t\t" );
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
	{ printf("\t\t" );
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
	printf("\t\t" );
	printf("D\tO\tM\tA\tN\tH\tT\tR\tA\tN\tG\n\n");
	printf("\t\t" );
	for (int i = 0; i < 74; ++i)
	{ 
		printf("\\");
	}
	printf("\n\n\n");
}
	{
	A: long long a, c, b;
	c=0;
	printf("\t\t\tNhập a:");
	scanf("%lld", &a);
	printf("\n");
	printf("Số nghịch đảo của %lld là:", a);
	while (a>0)
	{
		b=a%10;
		c=c*10+b;
		a=a/10;
	}
	printf("%4lld\n\n", c);
	}
	// 	int e;
	// printf("Nhập 1 để thử lại, hoặc ấn phím bất kỳ để dừng chương trình:");
	// scanf("%d", &e);
	// if (e==1){
	// 	goto A;
	// } 
	// else {return 0;}
}