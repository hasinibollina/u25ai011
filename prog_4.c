#include<stdio.h>
int main()
{
float c,f;
printf("enter the temperature in f:");
scanf("%f",&f);
c=((f-32)*5)/9;
printf("temperature is %f",c);
return 0;
}