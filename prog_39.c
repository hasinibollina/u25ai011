#include<stdio.h>
int main()
{
    float fact=1.0,sum=0;
    int i,n;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
        sum=sum+(i/fact);
    }
    printf("%f",sum);
    return 0;
}