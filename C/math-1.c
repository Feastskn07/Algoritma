#include <stdio.h>
int main(){
    int x, y;
    float z, pi=3.14;

    printf("x sayisini giriniz:");
    scanf("%d", &x);
    printf("y sayisini giriniz:");
    scanf("%d", &y);
    printf("z sayisini giriniz:");
    scanf("%f", &z);

    printf("x=%d, y=%d, z=%.2f, pi=%.2f \n", x,y,z,pi);
    printf("++x=%d \n", ++x);
    printf("--y=%d \n", --y);
    printf("++z=%.2f \n", ++z);
    printf("--pi=%.2f \n", --pi);
    return 0;
}