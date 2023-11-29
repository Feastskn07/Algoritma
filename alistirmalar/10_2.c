/*ChatGPT ile optimize edilmiştir.*/
#include <stdio.h>
int main()
{
    int n, t1 = 1, t2 = 1, t3;
    printf("Fibonacci serisinin kac terimini gormek istersiniz?");
    scanf("%d", &n);
    printf("\n%u\t%u\t", t1, t2);
    for (int i = 1; i <= n - 2; i++)
    {
        t3 = t1 + t2;
        printf("%u\t", t3);
        t1 = t2;
        t2 = t3;
    }
    printf("\n");
    return 0;
}
/*
Döngü Değişkeni Lokal:
Döngü değişkeni i'yi for döngüsü içinde tanımlayarak, döngü dışında kullanılmasını önler ve kodunuzu daha temiz hale getirir.

Virgül Operatörü:
t1=1,t2=1; ifadesi yerine t1 = t2 = 1; kullanarak, aynı değeri iki kez atamak yerine daha kısa bir ifade kullanılmıştır.

Printf İle Karakter Ekleme:
printf fonksiyonlarındaki metinlerin sonuna \n eklenmiştir. Bu, çıktının daha okunabilir olmasını sağlar ve satırın sonunda bir yeni satır ekler.
*/