#include<stdio.h>
int main()
{
    float charge,units;
    printf("Enter the units range:");
    scanf("%Ff",&units);
    if(units>=0 && units<=200)
    {
        charge=0.5*units;
    }
    else if(units>=201 && units<=400)
    {
        charge=100+(0.65*(units-200));
    }
    else if (units>=401 && units<=600)
    {
        charge=230+(0.80*(units-400));
    }
    else if (units>600) 
    {
        charge=425+(1.25*(units-600));
    }
    printf("amount paid by the costumer is %f",charge);
    return 0;
}