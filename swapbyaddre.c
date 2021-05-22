#include<stdio.h>
void swap(int*,int*);
int main()
{
    int a=10,b=20;
    printf("before swapping\n");
    printf("value of a=%d\tvalue of b=%d\n",a,b);//10,20
    swap(&a,&b);
    printf("after swapping\n");
    printf("value of a=%d\tvalue of b=%d\n",a,b);//20,10
    return 0;
}
void swap(int* p,int* q)
{
    int temp;
    temp=*p;
    *p=*q;
    *q=temp;
    printf("after swappimg\n");
    printf("value of *p=%d\tvalue of *q=%d\n",*p,*q);//20,10
}