#include<stdio.h>
int main()
{
    int a[50],i,n,temp;
    printf("Enter the elements of the array:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n");
    printf("The reverse of array is:");
    for(i=0;i<n;i++)
    {
        temp=a[i];
        a[i]=a[n-1-i];
        a[n-1-i]=temp;
        if(i>2)
        {
            temp=a[i];
            a[i]=a[n-1-i];
            a[n-1-i]=temp;
        }
        printf("%d\t",a[i]);
    }
    return 0;
}