#include <stdio.h>
int main()
{
    int i,j;
    printf("\n\n\n\n");
    //T1
    for (int i = 0; i <= 3; i++)
    {
        printf("\t\t\t\t\t");
        for (int j = 0; j <= 9; j++)
        {
            printf("01");
        } printf("\n");
    }
    //T2
    for (int i = 0; i <= 7; i++)
    {
        printf("\t\t\t\t\t");
        for (int j = 0; j <= 9; j++)
        {
            if (j==6||j==7||j==8||j==9) {
                printf("0");
            }
                printf(" ");
        }printf("\n");
    }
    printf("\n");
    //R1
    for (int i = 1; i <= 3; i++)
    {
        printf("\t\t\t\t\t");
        for (int j = 0; j <= 9; j++)
        {
            printf("10");
        } printf("\n");
    }
    //R2
    for (int i = 1; i <= 2; i++)
    {
        printf("\t\t\t\t\t");
        for (int j = 0; j <= 10; j++)
        {
            if (j==0||j==10) {
                printf("11011");
            }
                printf(" ");
        }printf("\n");
    }
    //R3
    for (int i = 1; i <= 3; i++)
    {
        printf("\t\t\t\t\t");
        for (int j = 0; j <= 9; j++)
        {
            printf("10");
        } printf("\n");
    }
    //R4
    for (i=1; i<=4; i++){
        printf("\t\t\t\t\t");
        for (int j = 1; j <= 3; j++)
        {
            printf("11");
        }
        for (int j = 0; j<=i+2; j++)
        {
            printf(" ");
        } printf("00100");
        printf("\n");
    } 
    //A1
    printf("\n");
    for (i=1; i<=4; i++){
        printf("\t\t\t\t\t");
        for (int j = 1; j <= 3; j++)
        {
            printf("00");
        }
        for (int j = 0; j<=i-2; j++)
        {
            printf(" ");
        } printf("101011");
        printf("\n");
    } 
    //A2
    for (int i = 1; i <= 3; i++)
    {
        printf("\t\t\t\t\t");
        for (int j = 0; j <= 8; j++)
        {
            printf("00");
        } printf("\n");
    }
    //A3
    for (i=1; i<=4; i++){
        printf("\t\t\t\t\t");
        for (int j = 1; j <= 3; j++)
        {
            printf("11");
        }
        for (int j = 0; j<=i+6; j++)
        {
            printf(" ");
        } printf("10011");
        printf("\n");
    } 
    printf("\n");
    printf("\t\t\t\t\tP H O T O G R P A H Y \n");
    printf("\n\n\n\n");
}

