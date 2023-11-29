/*ChatGPT ile optimize edilmiştir.*/
#include <stdio.h>
int main()
{
    for (int i = 1; i <= 9; i++)
    {
        for (int j = 1; j <= 9; j++)
        {
            for (int k = 1; k <= 9; k++)
            {
                // 3 basamaklı sayı oluşturuluyor.
                int sayi = 100 * i + 10 * j + k;
                // Oluşturulan sayının i ve j'ye bölünebilir olup olmadığı kontrol ediliyor.
                if (sayi % i == 0 && sayi % j == 0)
                {
                    // Eğer sayı i ve j'ye bölünebiliyorsa ekrana yazdırılıyor.
                    printf("%d\n", sayi);
                }
            }
        }
    }
    return 0;
}
/*
main fonksiyonunun dönüş türünü void yerine int olarak değiştirdim.
for döngülerindeki değişkenlerin türünü int olarak belirttim.
{} parantezleri ekleyerek, her döngü ve koşul bloğunu belirgin hale getirdim.
sayi değişkenini tanımlama ve hesaplama aynı satırda gerçekleştirildi.
if koşulu içindeki && (ve) operatörünü kullanarak iki koşulu birleştirdim.
*/