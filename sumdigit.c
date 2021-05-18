#include<stdio.h>
int main()
{
    int n,rem,sum=0;
    printf("enter number:");
    scanf("%d",&n);
    while (n>0)
    {
        rem=n%10;
        sum=sum+rem;
        n=n/10;
        printf("\nsum is = %d", sum);
    }
        printf("\ntotal sum is = %d", sum);
        return 0;
}