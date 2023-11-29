/*ChatGPT ile optimize edilmiştir.*/
#include <stdio.h>
#include <math.h>
int main() {
    float a, b, c;
    printf("a kenarini giriniz: "); scanf("%f", &a);
    printf("b kenarini giriniz: "); scanf("%f", &b);
    c = hypot(a, b);
    printf("c: %.2f\n", c);
    return 0;
}
/*
main fonksiyonunun dönüş türünü void yerine int olarak değiştirdim.
scanf fonksiyonlarındaki format belirteçlerini "%d" yerine "%f" olarak değiştirdim, çünkü a ve b ondalıklı sayılar olabilir.
hypot fonksiyonu, verilen iki kenarın uzunluğuna göre hipotenüsü hesaplar ve bu durumda daha basit ve doğru bir seçenektir.
printf ifadesinde sona bir yeni satır (\n) ekledim, bu da çıktıyı daha düzenli hale getirir.
Bu değişiklikler kodu daha okunabilir ve kullanıcı dostu hale getirir. Ayrıca, hypot fonksiyonu, hipotenüs hesaplamak için özel olarak tasarlanmış bir matematik fonksiyonudur ve 
bu nedenle Pisagor Teoremi'ni daha doğru bir şekilde uygular.
*/