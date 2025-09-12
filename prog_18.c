#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the first number:");
    scanf("%d",&a);
    printf("enter the second number:");
    scanf("%d",&b);
    printf("enter the third number:");
    scanf("%d",&c);
    (a>b && a>c) ? printf("a is greatest"): (b>c && b>a) ? printf("b is the largest"):printf("c is the largest");
    return 0;
}