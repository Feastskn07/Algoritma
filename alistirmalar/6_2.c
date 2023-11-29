/*ChatGPT ile optimize edilmiştir.*/
#include <stdio.h>
int main()
{
    int sayi, us;
    printf("sayi giriniz:"); scanf("%d", &sayi);
    printf("us giriniz:"); scanf("%d", &us);
    int sonuc = 1;
    for (int i = 0; i < us; i++)
    {
        sonuc *= sayi;
    }
    printf("sonuc: %d\n", sonuc);
    return 0;
}
/*
Değişken İsimleri ve Giriş Çıktı Düzeni:
Değişken isimleri daha açıklayıcı hale getirildi ve sonucun ekrana yazdırılması için printf ifadesinde düzenleme yapıldı.

Toplama Operatörü Kısayolu:
toplam *= sayi; ifadesi, toplam = toplam * sayi; ifadesinin kısayoludur ve daha okunabilir bir formül kullanımını sağlar.
*/