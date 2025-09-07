#include<stdio.h>
int main()
{
int a,b;
printf("The value of a is:");
scanf("%d",&a);
printf("The value of b is:");
scanf("%d",&b);
a=a+b;
b=a-b;
a=a-b;
printf("value of a is %d \n", a);
printf("value of b is %d",b);
return 0;
}