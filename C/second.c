#include <stdio.h>
int main(){
    char adi[100];
    char soyadi[100];
    float boy, kilo;
    printf("Adinizi giriniz:");
    scanf("%s", adi);
    
    printf("Soyadinizi giriniz:");
    scanf("%s", soyadi);
    
    printf("Boyunuzu santimetre cinsinden giriniz:");
    scanf("%f", &boy);
    
    printf("Kilonuzu giriniz:");
    scanf("%f", &kilo);
    
    float bki = (boy*100)/kilo;
    
    printf("Kullaninin; \n Adi:%s \n Soyadi:%s \n Boyu:%.1f \n Kilosu:%.1f \n İndex:%.2f", adi, soyadi, boy, kilo, bki);
    return 0;
}