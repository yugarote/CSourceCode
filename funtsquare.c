#include<Stdio.h>
void findsquare(int num);
int main()
{
    int inputnum;
    printf("enter the number:");
    scanf("%d",&inputnum);
    findsquare(inputnum);
    return 0;
}
void findsquare(int num)
{
    int square= num*num;
    printf("square is %d",square);
}