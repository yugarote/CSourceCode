#include<stdio.h>
int main()
{
    char ch;
    printf("enter the character");
    scanf("%ch",&ch);
    switch(ch)
    {
        case 'a':
        printf("vowel");
        break;
        case 'e':
        printf("vowel");
        break;
         case 'i':
        printf("vowel");
        break;
         case 'o':
        printf("vowel");
        break;
         case 'u':
        printf("vowel");
        break;
        default:
        printf("consonant");
    }
    return 0;
}