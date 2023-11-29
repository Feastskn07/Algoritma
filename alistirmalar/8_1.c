/*Sayı tahmin oyunu.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void main()
{
    int bs;
    srand(time(NULL));
    bs=rand()%100;
    //printf("bs=%d\n",bs);
    int tahmin;
    for(int i=1;i<100;i++)
    {
        scanf("%d",&tahmin);
        if(tahmin<bs)
        {
            printf("Arttir.\n");
        }
        else if(tahmin>bs)
        {
            printf("Azalt.\n");
        }
        else
        {
            printf("Tebrikler %d adimda buldunuz.",i);
            break;
        }
    }
}