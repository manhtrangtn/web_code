#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n,x;
    printf("\n\n\n鉛筆は１本で１５円です。\n");
    printf("\n買いたい数は：");
    scanf("%d", &x);
    printf("\n%d本の金額は：%d 円です。", x,x*15);
    A: printf("\n現金の：");
    scanf("%d", &n);
    if (n<(x*15)){
        printf("%d 円がたりません。\n", ((x*15)-n)); goto A;
    } else if (n==(x*15))
    {
        printf("%d 円ちょうどお預かり致します。\n", n);   
    } else if(n>(x*15)){
        printf("\n%d 円お預かり致します。\n", n);
        printf("\nお釣りは：%d  円です。", (n-(x*15)));
    }
    printf("ありがとうございました。\n\n\n\n\n");
    return 0;
}