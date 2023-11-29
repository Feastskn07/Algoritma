/*Hanelerine tam bölünen 3 basamaklı sayıları gösteren program.*/
#include <stdio.h>
void main()
{
    int i,j,k,sayi;
    //Ü. döngü iç içe kullanılarak 3 basamaklı sayılar oluşturuyor.
    for(i=1;i<=9;i++)
    {
        for(j=1;j<=9;j++)
        {
            for(k=1;k<=9;k++)
            {
                //3 basamaklı sayı oluşturuluyor.
                sayi=100*i+10*j+k;
                //Oluşturulan sayının i ve j'ye bölünebilir olup olmadığı kontrol ediliyor.
                if((sayi%i==0)&&(sayi%j==0))
                {
                    //Eğer sayı i ve j'ye bölünebiliyorsa ekrana yazdırılıyor.
                    printf("%d\n",sayi);
                }
            }
        }
    }
}