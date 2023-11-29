/*ChatGPT ile optimize edilmiştir.*/
#include <stdio.h>
int main()
{
    int a, b;
    printf("a: "); scanf("%d", &a);
    printf("b: "); scanf("%d", &b);
    if (a % b == 0)
    {
        printf("%d sayisi %d sayisina tam bolunur.\n", a, b);
    }
    else
    {
        printf("%d sayisi %d sayisina tam bolunmez.\n", a, b);
    }
    return 0;
}
/*
Indentation:
Kodu okunabilir hale getirmek için düzenleme yaptım. if ve else bloklarını açıkça göstermek için {} kullanmadım, çünkü her biri tek bir ifade içeriyor.

Tek Satırda printf:
printf ifadelerini tek satırda yazarak kodu daha sadeleştirdim.

Yeni Satır Eklendi:
printf ifadelerinden sonra bir yeni satır ekledim, bu da çıktının daha düzenli görünmesini sağlar.
*/