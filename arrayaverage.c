 #include <stdio.h>

float findAverage(int array[], int size);

int main()
{
    int arraySize;
    printf("Enter array Size : ");
    scanf("%d", &arraySize);
    
    int array[arraySize];
    int i;
    printf("\n");
    for (i = 0; i < arraySize; i++)
     {
        printf("Enter the %d element : ", i + 1);
        scanf("%d", &array[i]);
    }
    
    float average = findAverage(array, arraySize);
    printf("Average is %f", average);
    return 0;
}

float findAverage(int array[], int size) {
    int sum = 0, i;
    for (i = 0; i < size; i++) {
        sum = sum + array[i];
    }
    float average = sum / size;
    return average;
}