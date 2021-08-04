#include<stdio.h>
int main()
{
    int no_rows, row, column;
    scanf("%d",&no_rows);
    for( row = 1; row <= no_rows; row++)
    {
        for(column=1; column <= row ; column++)
        {
            printf("*");
        }
        printf("\n");
    }
}
