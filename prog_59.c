#include<stdio.h>
int main()
{
    int a[10],b[10],i,j,k,temp,l,m;
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
        temp=a[k];
        a[k]=b[k];
        b[k]=temp;
    }
    printf("the elements of the swapped array:");
    for(l=0;l<10;l++)
    {
        printf("%d\t",a[l]);
    }
    printf("\n");
    printf("the elements of the swapped array:");
    for(m=0;m<10;m++)
    {
        printf("%d\t",b[m]);
    }
    return 0;
}