#include<stdio.h>
int main()
{
    int i,j,k,a[50],n,temp;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    for(k=0;k<n;k++)
    {
        scanf("%d",&a[k]);
    }
    printf("The unsorted array is:");
    for(k=0;k<n;k++)
    {
        printf("%d\t",a[k]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("the sorted array is:");
    for(k=0;k<n;k++)
    {
        printf("%d\t",a[k]);
    }
    return 0;
}