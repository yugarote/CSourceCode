#include<stdio.h>
int main()
{
    char a[ ][2]={1,2,3,4,5,6,7,8,9};
    printf("%d %d\n",*(a+0),*(*(a+1)+3));
    return 0;
}