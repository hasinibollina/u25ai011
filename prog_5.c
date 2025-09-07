#include<stdio.h>
int main()
{
int a,b,temp;
printf("enter te value of a:");
scanf("%d",&a);
printf("enter the value of b:");
scanf("%d",&b);
temp=a;
a=b;
b=temp;
printf("the value of a,b %d,%d" , a,b);
return 0;
}  