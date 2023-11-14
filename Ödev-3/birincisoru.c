#include <stdio.h>
int main()
{
    int a, b=7, t1=0, t2=1, t3;

    printf("Terim sayısını girin: ");
    printf("Sizin yerinize seçeyim: Terim sayısı 7");
    //scanf("%d", &b);

    printf("Fibonacci Dizisi : ");

    for (a = 1; a <= b; ++a) //İlk terim yani a=1 olarak ayarlandı. Kuralda a girilen terim yani b=7 ye eşit olana kadar döngü oluşturacak.
    {
        printf("%d, ", t1); //Her döngüde terimleri yazdırıyoruz.
        t3 = t1 + t2; //3. terimi ilk iki terimi toplayarak belirliyoruz.
        t1 = t2; //her terimi bi sonrakine eşleyip döngüyü devam ettiriyoruz.
        t2 = t3; //bir önceki adımda olan şeyin aynısı.
    }
    return 0;
}