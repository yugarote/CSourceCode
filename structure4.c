#include<stdio.h>
struct city
{
    char name[100];
    float temp[7];
};

int main()
{
    int i;
    struct city cityA,cityB;
    printf("Enter the 1st city name:");
    scanf("%s",&cityA.name);
    printf("\nEnter the 1st city temperature:");
    for(i=0;i<7;i++)
    {
        scanf("%f",&cityA.temp[i]);
    }
    printf("Enter the 2nd city name : ");
    scanf("%s",&cityB.name);
    printf("Enter the 2nd city temperature : ");
    for(i=0;i<7;i++)
    {
        scanf("%f",&cityB.temp[i]);
    }
    printf("\ncity name %s\n", cityA.name);
    for(i = 0; i < 7; i++) 
    {
        printf("%.2f ", cityA.temp[i]);
    }
    printf("city name %s\n", cityB.name);
    for(i = 0; i < 7; i++) 
    {
        printf("%.2f ", cityB.temp[i]);
    }
    return 0;
}