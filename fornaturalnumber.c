#include<stdio.h>
int main ()
{
    int i,n;
    printf("enter any number\n");
    scanf("%d",&n);
    printf("natural number 1 to %d\n",n);
    for(i=1;i<=n;i++)
    {
        printf("%d\n",i);
    }
    return 0;
}