#include<stdio.h>
int main()
{
int HRA,DA,other_allowance,base_salary;
float gross_salary;
printf("HRA is:");
scanf("%d",&HRA);
printf("DA is:");
scanf("%d",&DA);
printf("Other allowances is:");
scanf("%d",&other_allowance);
printf("Enter the base salary:");
scanf("%d",&base_salary);
gross_salary=base_salary+base_salary*((HRA+DA+other_allowance)/100.0);
printf("The gross salary is %f",gross_salary);
return 0;
}