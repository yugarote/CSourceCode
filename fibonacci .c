#include<stdio.h>
int main()
{
    /*int n1=0,n2=1,n,n3,i=1;
    printf("enter number of terms\n");
    scanf("%d",&n);
    printf("%d %d\t",n1,n2);
    for(i=1;i<=n;i++)
    {
        n3=n1+n2;
        printf("%d\t",n3);
        n1=n2;
        n2=n3;
    }*/
    int a = 0, b = 1, c, i, count;
    printf("Enter the number of terms required in series : ");
    scanf("%d", &count);
    printf("%d %d", a, b);
    for (i = 0; i < count - 2; i++) 
    {
        c = a + b;
        printf(" %d", c);
        a = b;
        b = c;
    }
    return 0;
}