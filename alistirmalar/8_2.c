/*ChatGpt ile optimize edilmiştir.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(NULL));
    int bs = rand() % 100 + 1;  // 1 ile 100 arasında rastgele bir sayı seçilir
    // printf("bs=%d\n", bs);  // Test amaçlı kullanılan satır
    int tahmin;
    for (int i = 1; i <= 100; i++)
    {
        scanf("%d", &tahmin);
        if (tahmin < bs)
        {
            printf("Arttir.\n");
        }
        else if (tahmin > bs)
        {
            printf("Azalt.\n");
        }
        else
        {
            printf("Tebrikler %d adimda buldunuz.\n", i);
            break;
        }
    }
    return 0;
}
/*
Başlangıç Değerini 1 İle Ayarlama:
for döngüsü başlangıç değeri 1'den başlamaktadır.

Rastgele Sayı Aralığını 1 ile 100 Arasına Ayarlama:
rand() % 100 ifadesi, 0 ile 99 arasında bir sayı üretecektir. Bu nedenle +1 eklenerek 1 ile 100 arasında bir rastgele sayı elde edilir.

Döngü Sınırını 100 Olarak Belirleme:
Sayıyı 1 ile 100 arasında tuttuğumuz için, döngü sınırını 100 olarak belirledik.
*/