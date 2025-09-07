#include<stdio.h>
int main()
{
float p,r,t,si;
printf("Enter the rate:");
scanf("%f",&r);
printf("Enter the principle:");
scanf("%f",&p);
printf("\n Enter the time:");
scanf("%f",&t);
si=(p*t*r)/100;
printf("the simple interest is %f",si);
return 0;
}