#include<stdio.h>
#include<string.h>
struct employee
{
    int id;
    char name[70];
    float sal;
}e1,e2;
int main()
{
    e1.id=100;
    e1.sal=2500;
    strcpy(e1.name,"Ganesh");
    printf("%d\n%f\n%s\n",e1.id,e1.sal,e1.name);
    e2.id=200;
    e2.sal=4500;
    strcpy(e2.name,"Yuga");
    printf("%d\n%f\n%s",e2.id,e2.sal,e2.name);
    return 0;
}