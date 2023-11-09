#include <stdio.h>
int main(){
    int x, y, z, sonuc;
    printf("x,y,z  giriniz: ");
    scanf("%d,%d,%d",&x,&y,&z);
    sonuc =(x==y)&&(x<z);
    printf("%d\n", sonuc);
    sonuc=(x!=y)&&(y<z);
    printf("%d\n",sonuc);
    if((x==y)&&(x<z)){
        printf("1");
    }
    else{
        printf("0");
    }
    return 0;
}