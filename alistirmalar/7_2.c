/*ChatGPT ile optimize edilmiştir.*/
#include <stdio.h>
int main()
{
    int sayi1, sayi2, sayi3;
    // Kullanıcıdan 3 tam sayı girmesini iste
    printf("Lutfen 3 tam sayi giriniz:\n");
    scanf("%d,%d,%d", &sayi1, &sayi2, &sayi3);
    // En büyük sayıyı bul ve ekrana yazdır.
    int enBuyuk = sayi1;  // Varsayılan olarak sayi1'i en büyük olarak kabul et
    if (sayi2 > enBuyuk)
    {
        enBuyuk = sayi2;
    }
    if (sayi3 > enBuyuk)
    {
        enBuyuk = sayi3;
    }
    printf("En buyuk sayi: %d\n", enBuyuk);
    return 0;
}
/*
Bu versiyonda, üç sayının karşılaştırılması için ayrı if-else blokları yerine, tek bir if bloku içinde birden fazla karşılaştırma yaparak en büyük sayıyı buluyoruz. 
Bu, kodun daha sade ve okunabilir olmasını sağlar. Ayrıca, enBuyuk adında bir değişken kullanarak en büyük sayıyı daha etkili bir şekilde takip ediyoruz.
*/