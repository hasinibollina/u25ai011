#include<stdio.h>
int main()
{
    int i,j,k,a[50],temp,n;
    printf("Enter the elements of the array:");
    scanf("%d",&n);
    for(k=0;k<n;k++)
    {
        scanf("%d",&a[k]);
    }
    printf("array is: ");
    for(k=0;k<n;k++)
    {
        printf("%d\t",a[k]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("sorted array is: ");
    for(k=0;k<n;k++)
    {
        printf("%d\t",a[k]);
    }
    return 0;
}