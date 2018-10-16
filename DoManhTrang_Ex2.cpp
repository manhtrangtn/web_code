#include <stdio.h>
#include <string.h>
void strupr(char s[]){
	for (int i = 0; i < strlen(s); ++i)
   {
   	if (s[i]<='z'&&s[i]>='a')
   	{
   		s[i]=s[i]-32;
   	}
   	printf("%c", s[i]);
   }
}
int main()
{
	char s[100];
   printf("Enter string:");
   gets(s);
   printf("\nUpper Case is:");
   strupr(s);
	return 0;
}