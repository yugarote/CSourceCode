#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<6;i++)
    {
        for(j=0;j<i;j++)
        {
            printf("%d",i+j);
        }
        printf("\n");
    }
    return 0;
}