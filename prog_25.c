#include<stdio.h>
int main()
{
int n,a;
a=1;
printf("Enter the number:");
scanf("%d",&n);
for(int i=1;i<=10;i++)
{
a=n*i;
printf("%d \n",a);
}
return 0;
}