#include<stdio.h>
int main()
{
float sales,com;
printf("Enter the sales amount:");
scanf("%f",&sales);
if (sales<=500)
{
com=(5*sales)/100;
printf("%f",com);
}
else if(sales>500 && sales<=2000)
{
com=35+500+(10*(sales-500))/100;
printf("%f",com);
}
else if(sales>2000 && sales <=5000)
{
com=185+2000+(12*(sales-2000))/100;
printf("%f",com);
}
else if(sales>5000)
{
com=(12.5*sales)/100;
printf("%f",com);
}
return 0;
}