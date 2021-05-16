#include<stdio.h>
int main()
{
    char ch;
    printf("enter the alphabet");
    scanf("%ch &ch");
    switch(ch)
    {
        case 'a':
        printf("%ch is vowel",ch);
        break;
        case 'e':
        printf("%ch is vowel",ch);
        break;
         case 'i':
        printf("%ch is vowel",ch);
        break;
         case 'o':
        printf("%ch is vowel",ch);
        break;
         case 'u':
        printf("%ch is vowel",ch);
        break;
        default:
        printf("%ch is consonant");
    }
    return 0;
}