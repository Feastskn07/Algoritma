#include <stdio.h>
int main(){
    int x,y;

    printf("x sayisini giriniz:");
    scanf("%d", &x);
    printf("y sayisini giriniz:");
    scanf("%d", &y);

    printf("x=%d, y=%d \n", x,y);
    x=(y+5);
    printf("x=%d \n", x);
    x++;
    printf("x=%d \n", x);
    x=y=0;
    printf("x=%d, y=%d \n", x,y);
    return 0; 
}