#include<stdio.h>
int main()
{
int m1,m2,m3,m4,m5;
float total;
printf("Enter marks in maths:");
scanf("%d",&m1);
printf("Enter marks in physics:");
scanf("%d",&m2);
printf("Enter marks in chemistry:");
scanf("%d",&m3);
printf("Enter marks in english:");
scanf("%d",&m4);
printf("Enter marks in iop:");
scanf("%d",&m5);
total=(m1+m2+m3+m4+m5)/5.0;
printf("total marks of the student is:");
if (total>=90){
printf("A");
} 
else if (total<90 && total>=75){
printf("B");
} 
else if (total<75 && total>=60) {
printf("C");
}
else if (total<60 && total>=35){
printf("D");
} 
else if (total<35) {
printf ("E");
}
return 0;
}


