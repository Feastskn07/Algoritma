#include <stdio.h>
int main(){
    int x,y;
    float z,t;

    printf("x sayisini giriniz:");
    scanf("%d", &x);
    printf("y sayisini giriniz:");
    scanf("%d", &y);
    printf("z sayisini giriniz:");
    scanf("%f", &z);
    printf("t sayisini giriniz:");
    scanf("%f", &t);
    printf("x:%d, y=%d, z=%.2f, t=%.2f \n", x,y,z,t);

    printf("x/y=%d \n", x/y);
    printf("z/t=%.2f \n", z/t);
    printf("x/z=%.2f \n", x/z);
    return 0;
}