#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<6;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(j%2==0)
            {
            printf("0 ");
            }
            else
            {
            printf("1 ");
            }
        }
        printf("\n");
    }
    return 0;
}