#include<stdio.h>
int main()
{
    int num,i=2;
    printf("enter the number\n");
    scanf("%d",&num);
    while(i<num)
    {
        if(num%i==0)
        break;
        i++;
    }
    if(i==num)
    printf("prime no");
    else
    printf("not prime no");
    return 0;
}