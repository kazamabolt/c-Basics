#include<stdio.h>
int main()
{
    int n;
    char alp[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    scanf("%d",&n);

    for(int i=0; i<n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            printf("%c ",alp[i]);
        }
        printf("\n");
    }

}
