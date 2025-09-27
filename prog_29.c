#include<stdio.h>
int main()
{
int a,b,sum,num;
printf("Enter the number:");
scanf("%d",&num);
sum=0;
a=num;
while(num!=0)
{
b=num%10;
sum=sum*10+b;
num=num/10;
}
if(sum==a)
{
    printf("palindrome");
}
else
{
    printf("not a palindrome");
}
return 0;
}