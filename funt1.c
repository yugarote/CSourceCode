#include<stdio.h>
int area_c (int radius);
int main()
    {
        int radius;
        int area;
        printf("enter the radius:");
        scanf("%d",&radius);
        area= area_c (radius);
        printf("area=%d",area);
        return 0;
    }
    int area_c (int radius)
    {
        int area=3.14*radius*radius;
        return area;
    }


