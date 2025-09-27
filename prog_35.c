#include<stdio.h>
int main()
{
    int q,sum=0,num,b,sum1=0,num1;
    printf("Enter the number:");
    scanf("%d",&num);
    while(num!=0)
    {
        while(num!=0)
        {
        q=num%10;
        sum=sum+q;
        num=num/10;
        }
        if (sum>9)
        {
        num=sum;
        sum=0;
        }
    }
    printf("%d",sum);
    return 0;
}