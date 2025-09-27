#include<stdio.h>
int main()
{
    int i,j,n,temp,a[50];
    printf("Enter the number of elements:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the numbers:");
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        j=i;
        while(j>0)
        {
            if(a[j-1]>a[j])
            {
                temp=a[j];
                a[j]=a[j-1];
                a[j-1]=temp;
            }
            j--;
        }

    }
    printf("max is %d\n", a[n-1]);
    printf("min is %d", a[0]);
    return 0;
}
