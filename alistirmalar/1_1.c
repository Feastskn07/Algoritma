// Klavyeden girilen a sayısının yine klavyeden girilen b sayısına tam bölünüp bölünmediğini bulan program.
#include <stdio.h>
int main()
{
    int a,b;
    printf("a: "); scanf("%d",&a);
    printf("b: "); scanf("%d",&b);
    if(a%b==0)
        printf("%d sayisi %d sayisina tam bolunur.",a,b);
        else
            printf("%d sayisi %d sayisina tam bolunmez.",a,b);
    return 0;
}