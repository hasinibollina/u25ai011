#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=1;i<6;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(j==i)
            {
                printf("%d",1);
            }
            else
            {
                printf("%d",0);
            }
        }
        for(k=4;k>=i;k--)
        {
            printf("%d",0);
        }

        printf("\n");
    }
    return 0;
}