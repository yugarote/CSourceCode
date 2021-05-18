#include<stdio.h>
int main()
{
    int n, rem,orgnum;
    int sum = 0;
    printf("enter number:");
    scanf("%d",&n);
    orgnum = n;
    while (n>0)
    {
        rem=n%10;
        sum=sum*10 + rem;
        n=n/10;
        printf("\nsum is %d:",sum);
    }
    if ( orgnum==sum)
        printf("No is palindrom");
    else 
        printf("Not palindrom");
    return 0;
}