#include<stdio.h>
int main()
{
    char operation;
    printf("enter the operation: ");
    scanf("%c", &operation);
    float a,b;
    printf("enter first number: ");
    scanf("%f", &a);
    printf("enter second number: ");
    scanf("%f", &b);
    switch(operation)
    {
        case '+': 
        printf("%f+%f=%f", a,b,a+b);
        break;
        case '-': 
        printf("%f-%f=%f", a,b,a-b);
        break;
        case '*': 
        printf("%f*%f=%f", a,b,a*b);
        break;
        case '/': 
        printf("%f/%f=%f", a,b,a/b);
        break;
    }
    return 0;
}