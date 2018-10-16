#include <stdio.h>
int main()
{
    int n,a=1,m=1;
    printf("Nhập N: \n");
    scanf("%d", &n);
    for (a=1; a<=n; a++){
        m=m*a;
    }
    printf("Giai thừa của n là:%d", m); printf("\n");
    return 0;
}

