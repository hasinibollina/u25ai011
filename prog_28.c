#include<stdio.h>
int main()
{
    int num,sum,q,a;
    printf("Enter the number:");
    scanf("%d",&num);
    sum=0;
    a=num;
    while(num!=0)
    {
        q=num%10;
        sum=sum+(q*q*q);
        num=num/10;
    }
    if (sum==a)
    {
        printf("armstrong");
    }
    else
    {
        printf("not armstrong");
    }
    return 0;
}