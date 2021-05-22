#include<stdio.h>
void swap(int,int);
int main()
{      /* local variablr definition */
    int a=10,b = 20;
    printf("befor swapping\n");
    printf("value of a=%d\tvalue of b=%d\n",a,b);
    swap(a,b); /* actual parameter */
    printf("after swapping\n");
    printf("value of a=%d\tvalue of b=%d\n",a,b);
    return 0;
}
void swap(int c,int d) /* formal parameter*/
{
    int temp;
    temp=c; /* save the value of x */
    c=d; /*put d into c */
    d=temp; /* put temp into d*/
    printf("after swapping\n");
    printf("value of c=%d\tvalue of d=%d\n",c,d);
}