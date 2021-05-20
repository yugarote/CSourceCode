#include<stdio.h>
void area_c (int radius);
int main()
{
    int radius;
    printf("enter the radius:");
    scanf("%d",&radius);
    area_c (radius);
    getchar();
}
void area_c ( int radius)
{
    int area=3.14*radius*radius;
    printf("area=%d",area);
}