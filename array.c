/*#include<stdio.h>
int main()
{
    int a[5]={1,2,3,4,5};
    printf("%d", sizeof(a));//20 bytes
    printf("\n%d",a[1]);//2
    a[4]=50;
    printf("\n%d",a[4]);//50
    printf("\n%d",sizeof a[0]);//4 bytes
    return 0;
    }*/
   /* #include<stdio.h>
    int main()
    {
        int a[5]={1,2,3,4,5};
        printf("%d\n",a[0]);
        printf("%d",sizeof a[0]);
        printf("\n%u", &a[0]);
        return 0;
    }*/
    #include<stdio.h>
    int main()
    {
        int num;
        printf("Enter the number:");
        scanf("%d",&num);
        switch(num>0)
        {
            case 1:
            printf("number is positive");
            break;
            case 0:
            printf("number is negative");
            break;
        }
           return 0;
    }