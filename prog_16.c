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
    if (a>b){
        printf("a is greatest=%d",a);
    }
    else if(c>b){
        printf("c is greatest");
    }
    else {
        printf("b is the greatest");
    }
    return 0;
}