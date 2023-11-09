#include <stdio.h>
int main(){
    int x=5, y=5, z=10, sonuc;
//    sonuc =(x==y)&&(x<z);
//    printf("%d\n", sonuc);
//    sonuc=(x!=y)&&(y<z);
//    printf("%d\n",sonuc);
    if((x==y)&&(x<z)){
        printf("1");
    }
    else{
        printf("0");
    }
    return 0;
}