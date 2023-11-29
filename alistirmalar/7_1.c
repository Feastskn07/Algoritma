/*Üç sayıdan en büyüğünü bulan program.*/
#include <stdio.h>
int main()
{
    int sayi1,sayi2,sayi3;
    //Kullanıcıdan 3 tam sayı girmesini iste
    printf("Lutfen 3 tam sayi giriniz:\n");
    scanf("%d,%d,%d",&sayi1,&sayi2,&sayi3);
    //En büyük sayıyı bul ve ekrana yazdır.
    if(sayi1>=sayi2&&sayi1>=sayi3)
    {
        printf("En buyuk sayi: %d\n",sayi1);
    }
    else if(sayi2>=sayi1&&sayi2>=sayi3)
    {
        printf("En buyuk sayi: %d\n",sayi2);
    }
    else
    {
        printf("En buyuk sayi: %d\n",sayi3);
    }
    return 0;
}