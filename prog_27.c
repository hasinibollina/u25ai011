#include<stdio.h>
int main()
{
    int num,flag=1;              //flag==0 (not prime) and flag==1 (prime)
    printf("Enter the number:");
    scanf("%d",&num);
    for(int i=2;i<num && flag==1;i++)
    {
        if (num%i==0)
        {
            flag=0;
        }
    }
    if(flag==1)
    {
    printf("prime");
    }
    else
    {
        printf(" not prime");
    }
     return 0;
}

