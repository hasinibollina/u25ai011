#include<stdio.h>
#include<math.h>
int main()
{
float s,a,b,c,area;
printf("enter side1:");
scanf("%f",&a);
printf("enter side2:");
scanf("%f",&b);
printf("enter side3:");
scanf("%f",&c);
s=(a+b+c)/2.0;
area=sqrt(s*(s-a)*(s-b)*(s-c));
printf("area of the triangle %f", area);
return 0;
}