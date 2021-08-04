#include<stdio.h>
int main()
{
    int row,column,norow;
    scanf("%d",&norow);
    for(row = 0; row < norow; row++)
    {
        for(column = 0; column < norow; column++)
        {
            printf("*");
        }
        printf("\n");
    }
}
