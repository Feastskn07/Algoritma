#include <stdio.h>
int main()
{
    int a;
    printf("Secmek istediginiz gunu 1-Pazartesi olacak sekilde 1-7 araligindan secebilirsiniz: ");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        printf("Pazartesi");
        break;
    case 2:
        printf("Sali");
        break;
    case 3:
        printf("Carsamba");
        break;
    case 4:
        printf("Persembe");
        break;
    case 5:
        printf("Cuma");
        break;
    case 6:
        printf("Cumartesi");
        break;
    case 7:
        printf("Pazar");
        break;
    default:
        printf("Yanlis sayi girdiniz. Lutfen 1-7 arasinda bir sayi giriniz.");
        break;
    }
}