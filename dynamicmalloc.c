#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    ptr = malloc (15* sizeof (*ptr));
    if(ptr!=0)
    {
        *(ptr+5)=500;
        printf("value of 6th integer %d",*(ptr+5));
    }
    return 0;
}