/*Ore sayısı testi yapan program.*/
#include <stdio.h>
void main()
{
    int a,s=0,i;
    double t=0,ho;
    printf("Pozitif tam sayi:");
    scanf("%u",&a);
    for(i=1;i<=a;i++)
    {
        if(a%i==0)
        {
            s++;
            t+=1.0/i;
        }
    }
    ho=s/t;
    if(ho==(int)ho)
    {
        printf("Ore sayisi.");
    }
    else
    {
        printf("Ore sayisi değil.");
    }
}