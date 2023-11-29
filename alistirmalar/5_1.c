/*Pisagor teoremini yazan program.*/
#include <stdio.h>
#include <math.h>
void main()
{
    float a,b,c;
    printf("a kenarini giriniz:");scanf("%d",&a);
    printf("b kenarini giriniz:");scanf("%d",&b);
    //c=sqrt(a*a+b*b);
    c=sqrt(pow(a,2)+pow(b,2));
    printf("c:%.2f",c);
}