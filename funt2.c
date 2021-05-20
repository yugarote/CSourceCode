#include<stdio.h>
int area_c();
int main()
{
    int  area= area_c();
    printf("area=%d",area);
    getchar();
}
int area_c()
{
    int radius;
    printf("enter the radius:");
    scanf("%d",&radius);
    int area=3.14*radius*radius;
    return area;
}