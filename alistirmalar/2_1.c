//Girilen sayıya kadar olan asal sayıları listeleyen program.
#include <stdio.h>
#include <stdbool.h>
int asal_mi(int sayi)
{
    if(sayi<2)
    {
        return 0;
    }
    for (int i=2;i*i<sayi;i++)
    {
        if (sayi%i==0)
        {
            return 0;
        }
    }
    return 1;
}
void asal_sayilari_listele(int n)
{
    printf("%d'ye kadar olan asal sayilar:\n",n);
    for(int sayi=2;sayi<=n;sayi++)
    {
        if(asal_mi(sayi))
        {
            printf("%d",sayi);
        }
    }
    printf("\n");
}
int main()
{
    int sayi_limiti;
    printf("Bir sayi girin:");
    scanf("%d",&sayi_limiti);
    asal_sayilari_listele(sayi_limiti);
    return 0;
}