#include <stdio.h>
int main(){
    int x, y;
    printf("X:");
    scanf("%d", &x);
    printf("Y:");
    scanf("%d", &y);
    
    printf("x=%d, y=%d \n",x,y);
    printf("x+y=%d \n",x+y);
    printf("x-y=%d \n",x-y);
    printf("x*y=%d \n",x*y);
    printf("x/y=%d \n",x/y);
    printf("x mod y=%d \n",x%y);
    return 0;
}