#include<stdio.h>
int main()
{
    int a[10],sum=0;
    printf("Enter the elements of the matrix:");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    printf("\n");
    printf("The sum of the elements is:");
    printf("%d",sum);
    return 0;
}