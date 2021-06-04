#include<stdio.h>
void swap (int*,int*);
int main()
{
    int a=10,b=20;
    printf("before swapping\n");
    printf("value of a%d\t value of b%d\n",a,b);
    swap(&a,&b);
    printf("after swapping\n");
    printf("value of a%d\t value of b%d\n",a,b);
    return 0;
}
void swap(int*p,int*q)
{
    int temp;
    *p=*q;
    *q=temp;
    printf("after swapping\n");
    printf("value of *p %d\t value of *q %d \n",*p,*q);
}