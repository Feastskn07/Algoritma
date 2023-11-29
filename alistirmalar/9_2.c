/*ChatGPT ile optimize edilmiştir.*/
#include <stdio.h>
int main()
{
    int a, s = 0;
    double t = 0, ho;
    printf("Pozitif tam sayi:");
    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
    {
        if (a % i == 0)
        {
            s++;
            t += 1.0 / i;
        }
    }
    ho = s / t;
    printf(ho == (int)ho ? "Ore sayisi.\n" : "Ore sayisi degil.\n");
    return 0;
}
/*
Döngü Değişkeni Lokal:
Döngü değişkeni i'yi for döngüsü içinde tanımlayarak, döngü dışında kullanılmasını önler ve kodunuzu daha temiz hale getirir.

Tek Satırda İfade:
Son ifadeyi tek bir printf ifadesiyle yazarak kodu daha sade hale getirdik. ho == (int)ho ? "Ore sayisi.\n" : "Ore sayisi degil.\n" ifadesi, koşula bağlı olarak farklı bir metin yazdırma işlemi gerçekleştirir.
*/