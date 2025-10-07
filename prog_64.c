#include<stdio.h>
int main()
{
    int a[3][3],i,j,sum1=0,sum2=0,sum3=0,sum=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<1;i++)
    {
        for(j=0;j<3;j++)
        {
            sum1=sum1+a[i][j];
        }
    }
    for(i=1;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            sum2=sum2+a[i][j];
        }
    }
    for(i=2;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            sum3=sum3+a[i][j];
        }
    }
    printf("the sum of first row:");
    printf("%d\n",sum1);
    printf("the sum of second row:"); 
    printf("%d\n",sum2);
    printf("the sum of third row:");
    printf("%d",sum3);
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            sum=sum+a[i][j];
        }
         printf("%d\n", sum);
    }
    return 0;
}