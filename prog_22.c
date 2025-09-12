#include<stdio.h>
int main()
{
    int i,fact,n;
    printf("enter a number:");
    scanf("%d",&n);
    fact=1;
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("the factorial is %d",fact);
    return 0;
}