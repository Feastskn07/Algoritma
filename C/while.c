#include <stdio.h>
int main()
{
    int x; // başlangıç değeri
    printf("x için 5'ten küçük değer giriniz:");
    scanf("%d",&x);
    while (x<5) // bitiş kontrolü şartı
    {
        printf("%d\n",x);
        x++; // döngü kontrol değerini artırma
    }
    return 0;
}