#include<stdio.h>
int main()
{
char ch;
int ascii_value;
printf("Enter the character:");
scanf("%c",&ch);
ascii_value=(int) ch;
if(ascii_value>=65 && ascii_value<=90){
printf("uppercase");
}
else if (ascii_value>=97 && ascii_value<=122){
printf("lowercase");
}
else if (ascii_value>=48 && ascii_value<=57){
printf("digit");
} 
else {
printf("special character");
}
return 0;
}



