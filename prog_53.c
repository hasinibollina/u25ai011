#include<stdio.h>
int main()
{
    int i,j,k,l,m,n,o;
    for(i=1;i<5;i++)
    {
    for(j=6;j>=(2*i-1);j--)
    {
        printf(" ");
    }
    for(k=1;k<(2*i+1);k++)
    {
        if(k%2==0)
        {
            printf(" ");
        }
        else
        {
            printf("*");
        }
    }
    if(i>1)
    {
        for(l=1;l<(2*i-2);l++)
        {
            if(l%2==0)
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
    }
    
    printf("\n");
}
for(m=1;m<4;m++)
    {
        for(n=1;n<=(2*m);n++)
        {
            printf(" ");
        }
    for(o=9;o>=(4*m-3);o--)
    {
        if(o%2==0)
        {
            printf(" ");
        }
        else
        {
            printf("*");
        }
    }
    printf("\n");
}
return 0;
}

