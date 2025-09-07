#include<stdio.h>
int main()
{
int hrs,days,mins;
double secs=31558150;
mins=secs/60;
hrs=mins/60;
days=hrs/24;
mins=mins-(hrs*60);
hrs=hrs-(days*24);
printf("the period of the earth is %d days, %d hours and %d minutes", days, hrs, mins);
return 0;
}