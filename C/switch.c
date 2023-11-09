#include <stdio.h>
int main(){
    char harfNotu;
    printf("Harf notu giriniz: [A], [B], [C], [D], [F]\n");
    scanf("%c", &harfNotu);
    switch (harfNotu)
    {
    case 'A':
        printf("Harf notunuz A'dır.");
        break;
    case 'B':
        printf("Harf notunuz B'dır.");
        break;
    case 'C':
        printf("Harf notunuz C'dır.");
        break;
    case 'D':
        printf("Harf notunuz D'dır.");
        break;
    default :
        printf("Harf noutunuz F'dir.");
        break;
    }
}