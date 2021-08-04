#include<stdio.h>
int main()
{
    int totalRowno,row,space,symbol;
    scanf("%d",&totalRowno);
    for(row = 1;row <= totalRowno; row++)
    {
        for( space = 1; space <= (totalRowno-row); space++)
        printf(" ");
        for(symbol = 1; symbol <= ((2*row)-1); symbol++)
        printf("*");
        printf("\n");
    }
    return 0;
}
