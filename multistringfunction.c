#include<stdio.h>
#include<string.h>

int main() 
{
    char input[100];
    int length, i = 0, vowelCount = 0, spaceCount = 0;
    printf("Enter the string : ");
    scanf("%s", input);
    printf("Inputed string is : %s", input);
    length = strlen(input);
    printf("\nLength of the string is : %d", length);
    printf("\nNo of characters in string is : %d", length);
    while(input[i] != '\0') 
    {
        if (input[i] == 'a' || input[i] == 'e' || input[i] == 'i' || input[i] == 'o' || input[i] == 'u') 
        {
            vowelCount++;
        }
        if (input[i] == ' ')
        {
            spaceCount++;
        }
        i++;
    }
    printf("\nVowel count is : %d", vowelCount);
    printf("\nSpace count is : %d", spaceCount);
    printf("\nWord count is : %d", spaceCount + 1);
    return 0;
}