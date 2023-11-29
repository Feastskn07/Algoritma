/*Üs alma (pow kullanmadan) programı*/
#include <stdio.h>
void main()
{
    int sayi,us;
    printf("sayi giriniz:");scanf("%d",&sayi);
    printf("us giriniz:");scanf("%d",&us);
    int toplam=1;
    for(int i=0;i<us;i++)
    {
        toplam=toplam*sayi;
    }
    printf("sonuc%d",toplam);
}