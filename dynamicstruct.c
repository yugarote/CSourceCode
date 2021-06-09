#include<stdio.h>
#include<stdlib.h>
struct employee
{
    int id;
    float sal;
};
int main()
{
    struct employee e[2];
    struct employee *ptr=(struct employee*) malloc(1* sizeof(struct employee));
    int i;
    printf("accept details\n");
    for(i=0;i<1;i++)
    scanf("%d%f",&e[i].id,&e[i].sal);
    printf("display details\n");
    for(i=0;i<1;i++)
    printf("%d %f\n", e[i].id,e[i].sal);
    free(ptr);
    return 0;
}