#include<stdio.h>
struct employee
{
    int id;
    float sal;
    char name[10];
};
int main()
{
    struct employee e;
    //e-->struct employee
    //&e-->1000-->struct employee*//
    struct employee* ptr=&e;
    //1000-->struct employee*//
    printf("accept details");
    scanf("%d %f %s",&e.id,&ptr->sal,&ptr->name);
    //&e.id===&ptr-->id//
    printf("%d %f %s\n",ptr->id,e.sal,ptr->name);
    printf("%d",sizeof(ptr));//4bytes//
    return 0;
}