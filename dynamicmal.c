#include<stdio.h>
#include<stdlib.h>
int main ()
{
    float *p,sum =0;
    int i,n;
    printf("Enter the number of student:");
    scanf("%d",&n);
    p=(float*)malloc(n* sizeof(float));
    if( p==NULL)
    {
        printf("memory is not allocated");
        exit(1);
    }
    for(i=0;i<n;i++)
    {
        printf("enter mark for %d student",i+1);
        scanf("%f",p+i);
    }
    for(i=0;i<n;i++)
    {
        sum+=*(p+i);
    }
    printf("\nAverage marks=%2f\n",sum/n);
}