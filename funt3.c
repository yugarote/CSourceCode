#include<stdio.h>
void area_c();
int main()
{
    area_c();
    getchar();
}
void area_c()
{
    int radius;
    printf("enter the radius:");
    scanf("%d",&radius);
    int area=3.14*radius*radius;
    printf("area=%d",area);
}