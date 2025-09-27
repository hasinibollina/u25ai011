#include<stdio.h>
int main()
{
    int n,sum1=0,sum2=0;
    printf("Enter the number:");
    scanf("%d",&n);
    for(int i=1;i<=n;i=i+2)
    {
        sum1=sum1+i;
    }
    for(int i=0;i<=n;i=i+2)
    {
        sum2=sum2+i;
    }
    printf("%d \n",sum1);
    printf("%d \n",sum2);
    return 0;
}
