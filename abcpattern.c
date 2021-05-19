#include<stdio.h>
int main()
{
    int i,j,count=5;
    for( i=0;i<=count;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%c", 'A' + i);

        }
        printf("\n");
    }
}