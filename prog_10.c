#include<stdio.h>
int main()
{
float cm,m,p,c,e;
printf("enter the marks in maths out of 200:");
scanf("%f",&m);
printf("enter the marks in physics out of 200: ");
scanf("%f",&p);
printf("enter the marks in chemistry out of 200:");
scanf("%f",&c);
printf("enter the marks in entrance exam out of 100:");
scanf("%f",&e);
cm=(m+p+c)/2+e;
printf("the cut off marks of a student is %f", cm);
return 0;
}  