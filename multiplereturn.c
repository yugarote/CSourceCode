#include<stdio.h>
int show(int num)
{
    if(num%2==0)
    return 1;
    else
    return 0;
}
int main()
{
    int num;
    printf("enter num\n");
    scanf("%d",&num);
    printf("\n%d",show(num));
    return 0;
}