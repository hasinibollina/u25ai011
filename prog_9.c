#include<stdio.h>
int main()
{
int hrs,mins,secs;
printf("Enter the hours:");
scanf("%d",&hrs);
printf("Enter the minutes:");
scanf("%d",&mins);
printf("Enter the seconds:");
scanf("%d",&secs);
secs=hrs*60*60+mins*60+secs;
printf("The total seconds is %d",secs);
return 0;
}