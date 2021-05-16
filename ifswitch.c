#include<stdio.h>
int main()
{
   int a=10;
    { 
     int a=2;
     printf("%d",a);
    }
     printf("\n%d",a);
    return 0;
}