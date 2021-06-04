#include<stdio.h>
void square(int*);
int main()
{
    int a=10;
    square(&a);
    printf("%d",a);
    return 0;
}
void square(int *p)
{
    *p =  *p * *p;
}