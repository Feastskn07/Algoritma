#include <stdio.h>
int main(){
    int a,b,c;
    a=8;
    b=15;
    c=a/b+b/a*2;
    b=b/2;
    a=a+3;
    printf("a:%d, b:%d, c:%d",a,b,c);
    return 0;
}