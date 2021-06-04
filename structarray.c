#include<stdio.h>
struct employee
{
    int id;
    float sal;
    char name[10];
};
int main()
{
struct employee e[3];
int i;
printf("accept details\n");
for(i=0;i<=2;i++)
scanf("%d %f %s",&e[i].id,&e[i].sal,&e[i].name);
printf("display details\n");
for(i=0;i<=2;i++)
printf("%d %f %s\n",e[i].id,e[i].sal,e[i].name);
return 0;
}
