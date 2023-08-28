#include<stdio.h>
int main()
{
    float c,f ;
    printf ("Enter temperature in fahrenheit \n");
    scanf("%f" , &f);
    c=(5*(f-32))/9 ;
    printf("TEMPERATURE IN CELCIUS IS %f \n" , c);
    return 0;


}