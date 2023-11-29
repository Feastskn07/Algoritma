/*ChatGPT ile optimize edilmiştir.*/
#include <stdio.h>
int main()
{
    int a;
    printf("Secmek istediginiz gunu 1-7 araligindan secebilirsiniz (1-Pazartesi): ");
    scanf("%d", &a);
    switch (a)
    {
        case 1: printf("Pazartesi"); break;
        case 2: printf("Sali"); break;
        case 3: printf("Carsamba"); break;
        case 4: printf("Persembe"); break;
        case 5: printf("Cuma"); break;
        case 6: printf("Cumartesi"); break;
        case 7: printf("Pazar"); break;
        default: printf("Yanlis sayi girdiniz. Lutfen 1-7 arasinda bir sayi giriniz."); break;
    }
    return 0;
}
/*
Kullanıcıya Açıklama Ekledim:
printf ifadesinde kullanıcının hangi aralıkta bir sayı girmesi gerektiğini daha açık bir şekilde belirttim.

Dönüş Türü Değiştirildi:
main fonksiyonunun dönüş türünü int olarak değiştirdim, çünkü genellikle main fonksiyonları int türünde bir değer döndürmelidir.

Tek Satırda printf Kullanımı:
printf ifadelerini tek satırda yazarak kodu biraz daha sadeleştirdim.
*/