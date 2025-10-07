#include<stdio.h>
int main()
{
    int a[10],count1=0,count2=0,i;
    printf("Enter the elements of the matrix:");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        {
            count1++;
        }
        else 
        {
            count2++;
        }
    }
        printf("Number of even elements:");
        printf("%d\n",count1);
        printf("Number of odd elements:");
        printf("%d",count2);
    
    return 0;
}