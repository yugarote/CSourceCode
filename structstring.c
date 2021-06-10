#include<stdio.h>
#include<string.h>
struct employee
{
    int id;
    char name[20];
}e1;
int main()
{
    e1.id=123;
    strcpy(e1.name,"rahul");
    printf("%d\n%s",e1.id,e1.name);
    return 0;
}