#include<stdio.h>
int main()
{
    int a[10],i,count1=0,count2=0,count3=0;
    printf("Enter the elements of the matrix:");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]>0)
        {
            count1++;
        }
        else if(a[i]<0)
        {
            count2++;
        }
        else
        {
            count3++;
        }
    }
    printf("\n");
    printf("total positive elements:");
    printf("%d\n",count1);
    printf("total negative elements:");
    printf("%d\n",count2);
    printf("total zero elements:");
    printf("%d\n",count3);
    return 0;
}