#include<stdio.h>
int main()
{
int num,q,sum;
printf("Enter the number:");
scanf("%d",&num);
sum=0;
while(num!=0)
{
q=num%10;
sum=sum+q;
num=num/10;
}
printf("the sum is %d",sum);
return 0;
}