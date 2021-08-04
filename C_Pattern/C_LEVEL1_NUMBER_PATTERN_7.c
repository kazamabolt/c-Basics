#include <stdio.h>

int main()
{
    int i, j, rows, cols;
    scanf("%d", &rows);

    for(i=1; i<=rows; i++)
    {
        for(j=1; j<=rows; j++)
        {
            // Print corner element
            if((i==1 || i==rows) && (j==1 || j==rows))
            {
                printf("1 ");
            }
            else if(i==1 || i==rows || j==1 || j==rows)
            {
                // Print edge
                printf("1 ");
            }
            else
            {
                // Print center
                printf("0 ");
            }
        }

        printf("\n");
    }

    return 0;
}
