#include<stdio.h>
int main()
{
    int row,col;
    for(row=5;row<=10;row++)
    {
        for(col=1;col<=10;col++)
        {
            printf("%d*%d=%d\n",row,col,row*col);
        }
        printf("\n-----------\n");
    }
    return 0;
}