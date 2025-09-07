#include<stdio.h>
int main()
{
int m1,m2,m3,m4,m5,total;
float percentage;
printf("Enter marks of maths:");
scanf("%d",&m1);
printf(" \n Enter the marks of physics:");
scanf("%d",&m2);
printf(" \n Enter the marks of chemistry: ");
scanf("%d",&m3);
printf("\n Enter the marks of english:");
scanf("%d",&m4);
printf("\n Enter the marks of computer:");
scanf("%d",&m5);
total=(m1+m2+m3+m4+m5);
percentage=(total)/5.0;
printf("total is %d", total); 
printf(" \n the percentage of the student is %f", percentage);
return 0;
}