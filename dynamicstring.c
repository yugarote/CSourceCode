#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char *str;
    str=(char*) malloc(15);
    strcpy(str,"bye");
    printf("string =%s,address =%u\n",str,str);
    /* reallocating memory */
    str=(char*)realloc(str,25);
    strcat(str,"abc");
    printf("string= %s,address=%u\n",str,str);
    free(str);
    return 0;
}