#include <stdio.h>
int main()
{
    int n,x,y;
    printf("NHAP N:\n");
    scanf("%d", &n);
    for (x=1; x<=n; x++){
        printf("\t\t\t\t");
        for (y=1; y<=n-x; y++){
            printf(" ");
        } printf("*");
        for (y=1; y<=x-1; y++){
            printf("  ");
        } printf("*");
        printf("\n");
    }
    printf("\t\t\t\t");
    for (y=1; y<=n+1; y++){
        printf("* ");
    }
    printf("\n\n\n\n\n");
    return 0;
}
