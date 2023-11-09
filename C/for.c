#include <stdio.h>
int main(){
    int toplam=0;
    int x=0;
    for (x=0; x<11 ; x++) {
        toplam += x;
        printf("toplam=%d, sayac=%d\n",toplam,x);
    };
    printf("genel toplam=%d",toplam);
    return 0;
}