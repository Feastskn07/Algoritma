/*Fibonacci serisinin ilk n terimini bulan program.*/
#include <stdio.h>
int main()
{
    int n,i,t1,t2,t3;
    printf("Fibonacci serisinin kac terimini gormek istersiniz?");
    scanf("%d",&n);
    t1=1,t2=1;
    printf("\n%u\t%u\t",t1,t2);
    for(i=1;i<=n-2;i++)
    {
        t3=t1+t2;
        printf("%u\t",t3);
        t1=t2;
        t2=t3;
    }
    return 0;
}