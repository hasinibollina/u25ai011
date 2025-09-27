#include<stdio.h>
int main()
{
   int n1,n2,newterm,n,n3;
   n2=1;
   n1=0;
   newterm=0;
   printf("enter the range:");
   scanf("%d",&n);
   for(n3=0;n3<n;n3++)
   {
    printf("%d \t",n1);
    newterm=n1+n2;
    n1=n2;
    n2=newterm;
   }
   return 0;
}