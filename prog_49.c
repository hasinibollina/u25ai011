 #include<stdio.h>
 int main()
 {
    int i,j,k;
    for(i=1;i<6;i++)
    {
        for(j=4;j>=i;j--)
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
        printf("\n");
    }
    return 0;
 }