#include <stdio.h>
int main ()
{
    int i,n,m=1;
    printf("\t\t\t\n\nHÃY THỬ VỚI 5 SỐ!\n\n");
    do {
    printf("\tSỐ THỨ 0%d\n", m);
    printf("\tNhập số n:");
    scanf("%d", &n);
    printf("\n");
        for (i=2; i<=7; i++){
        if (i==n){
            printf("\n\n\t\tThứ %d", i);
        }
    }
    if (n==8){
        printf("\n\n\t\tChủ nhật");
    } else if (n>8||n<2){
        printf("\n\n\t\tSố %d Không phải là ngày trong tuần!", n);
    } 
    printf("\n\n\n");
    m++;
} while (m<=5);
}
