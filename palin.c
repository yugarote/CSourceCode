#include<stdio.h>
int main()
{
    int n,rem,sum=0 ,orgnum;
    printf("enter number:");
    scanf("%d",&n);
    orgnum=n;
    while(n > 0)
    {
        rem=n%10;
        sum= sum*10 + rem;
        n=n/10;
        printf("sum is %d:",sum);
    }
    if(orgnum==sum)
    {
        printf("number is palindrom");
    }
    else
    printf("not palindrom");
    return 0;
}