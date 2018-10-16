#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n,i,m=1;
    printf("ĐƯỢC PHÉP THỬ 05 SỐ\n");
    do {
        printf("\nLần nhập thứ: %d\n", m);
    printf("Nhập giá trị của n:\n");
    scanf("%d", &n);
    printf("\n\n\n");
        if (2<=n && n<=7){
            printf("\t\tHôm nay là thứ mấy? chắc chắn là thứ %d\n", n);
        }
    else if (n==8){
        printf("\t\tHôm nay là chủ nhật\n");
    } else {
        printf("\t\t%d Chả là cái thứ đéo gì trong tuần cả!\n\n\n\n", n);
    } m++;
} while (m<=5);
}
