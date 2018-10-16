#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void line(int count){
	for (int i = 0; i < count; ++i)
	{
		printf("-");
	}printf("\n");
}
struct info
{
	char Fname[10],Lname[10],Mname[10];
	int year;
	char msv[10];
};
struct student
{
	struct info nym;
	char sex[5];
	float point;
};
int main(int argc, char const *argv[])
{
	struct student *sv;
	sv=(struct student*)calloc(3,sizeof(struct student));
	for (int i = 0; i < 3; ++i)
	{
		printf("Nhap ho ten sinh vien:");
		scanf("%s", (sv+i)->nym.Fname);
		scanf("%s", (sv+i)->nym.Mname);
		scanf("%s", (sv+i)->nym.Lname);
		printf("Nhap gioi tinh:");
		scanf("%s", (sv+i)->sex);
		printf("Nhap nam sinh:");
		scanf("%d", &(sv+i)->nym.year);
		printf("Nhap ma sinh vien:");
		scanf("%s", (sv+i)->nym.msv);
		printf("Nhap diem:");
		scanf("%f", &(sv+i)->point);
	}
	line(85);
	printf("\nHo Ten\t\t\tGioi tinh\tNam Sinh\tMa Sinh Vien\t\tDiem\n");line(85);
	for (int i = 0; i < 3; ++i)
	{
		printf("%s %s %s\t\t%s\t\t%d\t\t%s\t\t%g\n\n\n\n", (sv+i)->nym.Fname,(sv+i)->nym.Mname,(sv+i)->nym.Lname,(sv+i)->sex,(sv+i)->nym.year,(sv+i)->nym.msv,(sv+i)->point);
	}
	
	
	return 0;
}