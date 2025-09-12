#include<stdio.h>
int main()
{
    int base,power,a;
    a=1;
    printf("enter the base:");
    scanf("%d",&base);
    printf("enter the power:");
    scanf("%d",&power);
    for(int i=1;i<=power;i++)
    {
       a=a*base;
    }
    printf("%d",a);
    return 0;
    
}