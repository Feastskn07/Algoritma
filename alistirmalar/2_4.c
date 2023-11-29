//ChatGPT ile 2_2.c dosyasını daha verimli şekilde yazdırdım.
#include <stdio.h>
int main()
{
    int i, j, n;
    printf("Bir tam sayi giriniz:");
    scanf("%d", &n);
    // 2 asal sayıdır, bu nedenle özel olarak işleme alıyoruz.
    if (n >= 2)
    {
        printf("2");
    }
    // Tek sayıları kontrol etmek yeterlidir, çünkü çift sayılar 2'nin katlarıdır.
    for (i = 3; i <= n; i += 2)
    {
        int is_prime = 1;  // Varsayılan olarak asal kabul ediyoruz.
        // i'nin kareköküne kadar olan sayılarla bölenlere bakıyoruz.
        for (j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                is_prime = 0;  // Eğer bir bölen bulunursa, asal değil.
                break;
            }
        }
        if (is_prime)
        {
            printf(" %d", i);
        }
    }
    return 0;
}