#include<stdio.h>
void sum_even_odd(int*p,int*q)
{
  int i;
  for(i=1;i<=10;i++)
  {
      if(i%2==0)
      *p=*p+i;
      else
      *q=*q+i;
  }
}
int main()
{
    int sum_odd=0,sum_even=0;
    sum_even_odd(&sum_even,&sum_odd);
    printf("%d\n %d\n",sum_even,sum_odd);
    return 0;
    }