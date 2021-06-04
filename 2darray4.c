#include<stdio.h>

int main()
{
    float array[2][7];
    int i, j;
    printf("Enter the first city temperature below \n");
    for (i = 0; i < 7; i++) 
    {
        printf("Enter day %d temperature : ", i + 1);
        scanf("%f", &array[0][i]);
    }
    printf("Enter the second city temperature below \n");
    for (i = 0; i < 7; i++) 
    {
        printf("Enter day %d temperature : ", i + 1);
        scanf("%f", &array[1][i]);
    }
    printf("Below are the entered details\n");
    for (i = 0; i < 2; i++)
    {
        printf("%d city temperature details : \n", i + 1);
        for (j = 0; j < 7; j++) {
            printf("Day %d temperature is %.2f \n", j + 1, array[i][j]);
        }
    }
    return 0;
}