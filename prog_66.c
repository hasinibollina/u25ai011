#include<stdio.h>
int main()
{
    int a[3][3],i,j,k,l,b[3][3],c[3][3];
    printf("The first array is:\n");
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
    printf("The second array is:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    printf("The sum of the two arrays is:\n");
    for(k=0;k<3;k++)
    {
        for(l=0;l<3;l++)
        {
        c[k][l]=a[k][l]+b[k][l];
        printf("%d\t",c[k][l]);
        }
        printf("\n");
    }
    return 0;
}