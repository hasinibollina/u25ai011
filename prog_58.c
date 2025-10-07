#include<stdio.h>
int main()
{
    int a[10],b[10],c[10],i,j,k,sum=0;
    printf("Enter the elements of the first array:");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the elements of the second array:");
    for(j=0;j<10;j++)
    {
        scanf("%d",&b[j]);
    }
    for(k=0;k<10;k++)
    {
        c[k]=a[k]+b[k];
        printf("%d\t",c[k]);
    }
    return 0;
}