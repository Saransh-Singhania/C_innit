/*WAP to print sum of all numbers upto entered n natural nos*/
#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter the number:- \n");
    scanf("%d",&n);

    for (i=1;i<=n;i++)
    {
        sum +=i;
    }
    
    printf("Sum of all the number's upto %d is:-\n%d",n,sum);
    return 0;
}