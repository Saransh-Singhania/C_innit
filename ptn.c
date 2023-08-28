/*WAP to print upto n natural numbers*/
#include<stdio.h>
int main()
{
    int n ;
    printf("Enter a number: ");
    scanf("%d", &n);

    for( int i=1 ; i<=n ; i++) /*to change to upto n while nos , replace i=1 with i=0*/
    {
        printf("%d\n" , i);
    }
return 0;
}
