#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("ENTER a \n");
    scanf("%d",&a);
    printf("ENTER b \n");
    scanf("%d",&b);
    printf("ENTER C \n");
    scanf ("%d",&c);
    d=a;
    a=b;
    b=c;
    c=d;

    printf("NOW a is %d \n    b is %d \n    c is %d \n", a , b ,c ) ;
    return 0; 
}