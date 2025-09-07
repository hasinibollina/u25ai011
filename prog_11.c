#include<stdio.h>
int main()
{
int secs,hrs,mins;
printf("enter the seconds:");
scanf("%d",&secs);
mins=secs/60;
hrs=mins/60;
mins=mins-(hrs*60);
printf("the time is %d hours, %d minutes and %d seconds",hrs,mins,secs);
return 0;
}