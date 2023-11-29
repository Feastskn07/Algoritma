//ChatGPT ile 2_1.c dosyasını daha verimli şekilde yazdırdım.
#include <stdio.h>
#include <stdbool.h>
bool asal_mi(int sayi);
void asal_sayilari_listele(int n)
{
    printf("%d'ye kadar olan asal sayilar:\n", n);
    // 2 asal sayıdır, bu nedenle 2'den başlayarak kontrol ediyoruz.
    if (n >= 2)
    {
        printf("2 ");
    }
    // Tek sayıları kontrol etmek yeterlidir, çünkü çift sayılar 2'nin katlarıdır.
    for (int sayi = 3; sayi <= n; sayi += 2)
    {
        if (asal_mi(sayi))
        {
            printf("%d ", sayi);
        }
    }
    printf("\n");
}
// İşlevin dönüş türü int yerine bool olarak değiştirilmiştir.
bool asal_mi(int sayi)
{
    if (sayi < 2)
    {
        return false;
    }
    // 2'nin katları dışındaki çift sayılara bölen bakmamıza gerek yoktur.
    for (int i = 3; i * i <= sayi; i += 2)
    {
        if (sayi % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int sayi_limiti;
    printf("Bir sayi girin:");
    scanf("%d", &sayi_limiti);
    asal_sayilari_listele(sayi_limiti);
    return 0;
}