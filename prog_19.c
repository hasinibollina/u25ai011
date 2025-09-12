#include<stdio.h>
int main()
{
    char ch;
    int ascii_value;
    printf("enter the character:");
    scanf("%c",&ch);
    if (ch>='A' && ch<='Z'){
        printf("uppercase");
}
else {
    printf("lowercase");
}
return 0;
}