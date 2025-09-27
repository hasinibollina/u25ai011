#include<stdio.h>
int main()
{
int sum,q,num,a;
printf("Enter the number:");
scanf("%d",&num);
sum=0;
a=num;
while(num!=0)
{
q=num%10;
sum=sum*10+q;
num=num/10;
}
printf("the reverse num is %d", sum);
return 0;
}