#include<stdio.h>
int main()
{
    int x,n,function;
    printf("Enter the x:");
    scanf("%d",&x);
    printf("Enter the value of n:");
    scanf("%d",&n);
    switch(n)
    {
        case 1 : 
        printf("%d",1+x);
        break;
        case 2 :
        printf("%d",1+x/n);
        break;
        case 3 :
        printf("%d",1+(x*x*x));
        break;
        default:
        printf("%d",1+(n*x));
        break;
    }
    return 0;
}