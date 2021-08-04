#include <stdio.h>

int main()
{
    int i, j, N;
    scanf("%d", &N);
    N=2*N-1;
    for(i=1; i<=N; i++)
    {
        for(j=1; j<=N; j++)
        {
            if(i==1 || i==N || j==1 || j==N)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
printf("\n");
    }

    return 0;
}
