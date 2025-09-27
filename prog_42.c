#include<stdio.h>
int main()
{
    int n,flag=1; //flag=1 (prime) and flag=0 (composite)
    printf("Enter the number:");
    scanf("%d",&n);
    for(int i=2;i<n && flag==1;i++)
    {
        if(n%i==0)
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
        printf("composite");
      }
      return 0;
}

       