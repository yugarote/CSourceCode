#include<stdio.h>
void ustrcat(char*,char*);
int main()
{
    char a[10]="hi";
    char b[10]="bye";
    ustrcat(a,b);
    printf("concatenated string is %s",a);
    return 0;
}

void ustrcat(char*a1,char*b1)
{
    while(*a1!='\0')
     {
        a1++;
    }
    while (*b1!='\0')
    {
        *a1=*b1;
        b1++;
        a1++;
    }
    *a1='\0';
}