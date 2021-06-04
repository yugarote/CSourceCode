#include<stdio.h>
#include<string.h>
struct employee
{
    int id;
    float sal;
    char name[10];
};
int main()
{
    struct employee e1,e2={102,6000.00,"rohan"},e3;
    printf("enter details\n");
    scanf("%d%f%s",&e1.id,&e1.sal,&e1.name);
    printf("%d %f %s\n",e1.id,e1.sal,e1.name);
    /*e3=e2; // Copying entire structure into another structure
    printf("%d %f %s\n",e3.id,e3.sal,e3.name);*/
    e3.id=e2.id;
    e3.sal=e2.sal;
    strcpy(e3.name,e2.name);
    printf("%d %f %s\n",e3.id,e3.sal,e3.name);
    // printf("%d",size of (e1));//18 bytes
    //printf("%d",size of(struct employee));//18 bytes
    return 0;
}