#include<stdio.h>
int main()
{
    int i,j,counter='A';
    for(i=1;i<=4;i++)
    {
        for(j=1;j<i;j++)
        {
            printf(" %c",counter);
            counter++;
        }
        printf("\n");
    }
    return 0;
}