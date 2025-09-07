#include<stdio.h>
int main()
{
char ch;
int ascii_value;
printf("Enter the character:");
scanf("%c",&ch);
ascii_value=(int) ch;
printf("the ascii value ia %c=%d",ch,ascii_value);
return 0;
}